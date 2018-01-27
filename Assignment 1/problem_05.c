/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_5.c
Author: Aaron Williams
Class: CECS 130-50
Version: 1.0
Description: Asks user for input for 4 variables and gives output of function:
f = (a-b)(x-y).
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(void) {
	double a, b, x, y, f;
	
	printf("\nInput value for a: ");
	scanf("%lf", &a);
	printf("\nInput value for b: ");
	scanf("%lf", &b);
	printf("\nInput value for x: ");
	scanf("%lf", &x);
	printf("\nInput value for y: ");
	scanf("%lf", &y);
	
	f = (a - b) * (x - y);
	
	printf("\nThe value of f = %6.2lf\n", f);
	
	return 0;
}