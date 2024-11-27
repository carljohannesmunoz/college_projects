/* BSCS - 1A (GROUP 10): Alzaga, Letada, Lumbes, Muñoz
Programming Exercise 6 */

#include<stdio.h>

int occurenceCounter(int number, int digit) {
    if(number<0) number*=-1;
    if(number!=0) {
        int lastDigit = number%10;
        int digitCount = (digit==lastDigit) ? 1 : 0;
        return digitCount + occurenceCounter(number/10, digit);
    } else {
        return 0;
    }
}



int main() {
    int number;
    FILE *ifp;

    ifp = fopen("Integers.txt", "rt");
    printf("INTEGER \t0s \t1s \t2s \t3s \t4s \t5s \t6s \t7s \t8s \t9s\n");
    printf("-------------------------------------------------------------------------------------------\n");
    while(1) {
        fscanf(ifp, "%d", &number);
        if(number==0) break;
        printf("%d\t\t", number);
        for(int digit=0; digit<=9; digit++) {
            int digitCount = occurenceCounter(number, digit);
            printf("%d\t ", digitCount);
        }
        printf("\n");
    }
    fclose(ifp);
    return 0;
}
