/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_6.c
Author: Aaron Williams
Class: CECS 130-50
Version: 1.0
Description: Calculates commission based on user input using the formula:
Commission = Rate * (Sales Price - Cost).
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(void) {
	double dRate, salesPrice, cost, commission;
	
	printf("\nInput value for Rate: ");
	scanf("%lf", &dRate);
	printf("\nInput value for Sales Price: ");
	scanf("%lf", &salesPrice);
	printf("\nInput value for Cost: ");
	scanf("%lf", &cost);
	
	commission = dRate * (salesPrice - cost);
	
	printf("\nThe value of Commission = %6.2lf\n", commission);
	
	return 0;
}