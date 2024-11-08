/* BSCS - 1A (GROUP 10): Alzaga, Letada, Lumbes, Muñoz
Programming Exercise 5 */

#include <stdio.h>

int main()
{
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    printf("\nOutput of Collatz Conjecture:\n%d", number);
    do {
        if(number == 1) {
            printf(" → %d", number);
            continue;
        } else if(number % 2 == 0) {
            number /= 2;
        } else if(number % 2 != 0) {
            number = (number * 3) + 1;
        }
        printf(" → %d", number);

    } while(number != 1);

	return 0;
}
