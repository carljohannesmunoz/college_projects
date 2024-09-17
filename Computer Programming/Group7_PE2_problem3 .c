#include <stdio.h>

//Group 7 - PE 2 Problem 3
//BILL TOTAL AND SPLIT CALCULATOR w/

int main()
{

	float bill_amount, tip_percentage, total_bill, indiv_pay; 
	int no_of_ppl;

	printf("Welcome, this is a bill calculator to calculate total bill with tip and split among customers.\n\n");

	printf("Enter the bill amount: ");
	scanf("%f", &bill_amount);
	printf("Enter the tip percentage: ");
	scanf("%f", &tip_percentage);
	printf("Enter the number of people: ");
	scanf("%d", &no_of_ppl);
	total_bill = bill_amount + (bill_amount * tip_percentage) / 100; 
	indiv_pay = total_bill / no_of_ppl;
	printf("Total bill including tip: %f\nEach person should pay: %f\n", total_bill, indiv_pay);
	
return 0;
}