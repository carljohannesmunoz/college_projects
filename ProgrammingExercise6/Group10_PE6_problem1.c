/* BSCS - 1A (GROUP 10): Alzaga, Letada, Lumbes, Muñoz
Programming Exercise 6 */

#include<stdio.h>

int isPrime(int number) {
    int factors = 0;
    if(number > 1) {
        for(int checker = 1; checker<=number; checker++) {
            if(checker<=number && number%checker==0) 
                factors++;
        }
        if(factors==2) return 1;
        else return 0;
    }
    return 0;
}

int isPerfect(int number) {
    int divisors = 0;
    for(int  j=1; j<=number; j++) {
        if(number%j==0) divisors+=j;
        if(divisors==number) return 1;
    }
    return 0;
}

int main() {
    int number;
    printf("Enter a positive integer(Ctrl-Z to end): ");
    while(scanf("%d", &number) != EOF) {
        (isPrime(number)==0) ? printf(" prime: NO\n") : printf(" prime: YES\n");
        (isPerfect(number)==0) ? printf(" perfect: NO\n\n") : printf(" perfect: YES\n\n");
        printf("Enter a positive integer(Ctrl-Z to end): ");
    }
    printf("\n End of program. Thanks!\n");

    return 0;
}
