#include <stdio.h>


int main() {
    int totalAmountPayable, receivedPayment, amountOfChange;  
    
    printf("Enter total amount payable: ");
    scanf("%d", &totalAmountPayable);

    printf("Payment received: ");
    scanf("%d", &receivedPayment);

    amountOfChange = receivedPayment - totalAmountPayable;

    printf("The total amount of change: %d\n", amountOfChange);
    printf("Number of 1000 bills: %d\n", amountOfChange / 1000);
    amountOfChange = amountOfChange % 1000;
    
    printf("Number of 500 bills: %d\n", amountOfChange / 500);
    amountOfChange = amountOfChange % 500;

    printf("Number of 200 bills: %d\n", amountOfChange / 200);
    amountOfChange = amountOfChange % 200;

    printf("Number of 100 bills: %d\n", amountOfChange / 100);
    amountOfChange = amountOfChange % 100;

    printf("Number of 50 bills: %d\n", amountOfChange / 50);
    amountOfChange = amountOfChange % 50;

    printf("Number of 20 bills: %d\n", amountOfChange / 20);
    amountOfChange = amountOfChange % 20;

    printf("Number of 10 bills: %d\n", amountOfChange / 10);
    amountOfChange = amountOfChange % 10;

    printf("Number of 5 bills: %d\n", amountOfChange / 5);
    amountOfChange = amountOfChange % 5;

    printf("Number of 1 bills: %d\n", amountOfChange / 1);
    amountOfChange = amountOfChange % 1;

    return 0;
}
