/*  Munoz, Carl Johannes Ll.
    BSCS-1A*/

#include<stdio.h>

/*########################################################################*/
/*Transposes the Original Matrix*/
/*########################################################################*/
void transposedMatrix(int A[][100], int row, int col) {
    if (col > row)
        row = col;
    for (int r = 0; r < row; r++)
    {
        for (int c = 1+r; c < row; c++) {
            int temp = A[r][c];
            A[r][c] = A[c][r];
            A[c][r] = temp;   
        }
    }  
}

/*########################################################################*/
/*returns the sum of the Diagonal*/
/*########################################################################*/
int sumOfDiagonal(int A[][100], int row, int sum) {
    for(int i = 0; i < row; i++) {
        sum += A[i][i];
    }
    return sum;
}

/*########################################################################*/
/*returns the sum of the upper Triangulation*/
/*########################################################################*/
int upperTriangular(int A[][100], int row, int sum) {
    for (int r = 0; r < row; r++)
    {
        for (int c = 0 + r; c < row - 1; c++) {
            sum += A[r][c+1];
        }
    }
    return sum;
}

/*########################################################################*/
/*returns the sum of the lower Triangular*/
/*########################################################################*/
int lowerTriangular(int A[][100], int row, int sum) {
    for (int c = 0; c < row; c++)
    {
        for (int r = 0 + c; r < row - 1; r++) {
            sum += A[r+1][c];
        }
    }
    return sum;
}

/*########################################################################*/
/*returns the sum of each Row*/
/*########################################################################*/
int sumOfRow(int A[][100], int row, int col, int r, int sum) {
    if (col > row)
        row = col;

    for (int i = 0; i < row; i++)
    {
        sum += A[r][i];
    }
    return sum;
}

/*########################################################################*/
/*returns the sum of each Columns*/
/*########################################################################*/
int sumOfCol(int A[][100], int row, int col, int c, int sum) {
    if (col > row)
        row = col;

    for (int i = 0; i < row; i++)
    {
        sum += A[i][c];
    }
    return sum;
}

/*########################################################################*/
/*returns the sum of Elements*/
/*########################################################################*/
int sumOfElements(int A[][100], int row, int col, int sum) {
    if (col > row) 
        row = col;

    for (int r = 0; r < row; r++)
    {
        for (int i = 0; i < row; i++)
        {
            sum += A[i][r];
        }
        
    }
    return sum;
}


int main() {
    FILE* in;
    int row, col, temp, sum = 0;
    int A[100][100];

    in = fopen("matrix.in", "rt");

    /*Read from file "matrix.in"*/
    fscanf(in, "%d %d", &row, &col);
    for(int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++)
        {
            fscanf(in, "%d", &A[r][c]);
        }
    }

    /*########################################################################*/
    /*Prints the original matrix*/
    /*########################################################################*/
    printf("Original Matrix: ");

    /*Checks if row  is equal col if not then it is a Rectangular Matrix*/
    (row != col) ? printf("Rectangular Matric\n") : printf("Square Matrix\n");

    printf("\t\t\t\t\t\t\t\tRow Sum\n");

    for(int r = 0; r < row; r++) {

        printf("\t\t\t");

        for (int c = 0; c < col; c++)
        {
            printf("%3d  ", A[r][c]);
        }
        printf("| %d\n", sumOfRow(A, row, col, r, sum));

    }

    printf("\t\t\t---------------------------\n");
    printf("Column Sum: ");

    for (int c = 0; c < col; c++)
    {
        printf("%3d  ", sumOfCol(A,row, col, c, sum));
    }
    printf("| %d\n\n", sumOfElements(A, row, col, sum));


    /*########################################################################*/
    /*Checks if row is equal col then calls the upperTriangular and lowerTriangular method*/
    /*########################################################################*/
    if (row == col) {
        int n = sumOfDiagonal(A, row, sum);
        printf("Sum of the Main Diagonal: %d\n", n);
        printf("Sum of the Upper Triangular Matrix: %d\n", upperTriangular(A, row, sum) + n);
        printf("Sum of the Lower Triangular Matrix: %d\n\n", lowerTriangular(A, row, sum) + n);
    }

    printf("*********************************************************************\n");

    /*calls the transposedMatrix method to transpose the original matrix*/
    transposedMatrix(A, row, col);

    /*########################################################################*/
    /*Prints the transposed matrix*/
    /*########################################################################*/
    printf("Transpose of the Matrix:\n");
    printf("\t\t\t\t\t\t\t\tRow Sum\n");

    /*Check if row not equal col is year interchange val*/
    if(row != col) {
        temp = row;
        row = col;
        col = temp;
    }

    for(int r = 0; r < row; r++) {
        printf("\t\t\t");
        for (int c = 0; c < col; c++)
        {
            printf("%3d  ", A[r][c]);
        }
        printf("| %d\n", sumOfRow(A, row, col, r, sum));
    }

    printf("\t\t\t---------------------------\n");
    printf("Column Sum: ");

    for (int c = 0; c < col; c++)
    {
        printf("%3d  ", sumOfCol(A, row, col, c, sum));
    }
    printf("| %d\n\n", sumOfElements(A, row, col, sum));

    /*########################################################################*/
    /*Checks if row is equal col then calls the upperTriangular and lowerTriangular method*/
    /*########################################################################*/
    if (row == col) {
        int n = sumOfDiagonal(A, row, sum);
        printf("Sum of the Main Diagonal: %d\n", n);
        printf("Sum of the Upper Triangular Matrix: %d\n", upperTriangular(A, row, sum) + n);
        printf("Sum of the Lower Triangular Matrix: %d\n\n", lowerTriangular(A, row, sum) + n);
    }

    fclose(in);

    return 0;
}
