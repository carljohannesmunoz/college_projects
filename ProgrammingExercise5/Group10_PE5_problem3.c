/* BSCS - 1A (GROUP 10): Alzaga, Letada, Lumbes, Muñoz
Programming Exercise 5 */

#include<stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    while(number != 0) {
        sum = sum + (number%10);
        number /=10;
    }
    printf("\nSum of digits: %d\n", sum);

    return 0;
}