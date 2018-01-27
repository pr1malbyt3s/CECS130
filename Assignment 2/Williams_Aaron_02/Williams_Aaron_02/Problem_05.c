/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_05.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 2
Version: 1.0
Description: This program builds on a previous source code by providing function
definitions for prototypes. It calls each of the functions in the main function
to display each functions capability.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

//Declaration of functions to prevent errors.
int remain(int, int);
double greater(double, double);
void ATM(void);

int main(void) {
	int a, b;
	double c, d;
	
	//Ask user for input and store variables.
	printf("\nEnter two integers in the form a,b to find their remainder: ");
	scanf("%d,%d", &a, &b);
	printf("\nEnter two numbers in the form c,d to find which is larger: ");
	scanf("%lf,%lf", &c, &d);
	
	remain(a,b);
	greater(c,d);
	ATM();
	
	return 0;
}

//Define function that divides two numbers and returns the remainder.
int remain(int a, int b) {
	int remain;
	if(a >= b) {
		remain = a % b;
	}
	else {
		remain = b % a;
	}
	printf("\nRemain function output\n");
	printf("----------------------------\n");
	printf("\nThe remainder of the larger int/smaller int is: %d\n", remain);
	
	return remain;
}

//Define function that finds the larger of two numbers and returns the result.
double greater(double c, double d) {
	double larger;
	if(c > d) {
		larger = c;
	}
	if(d > c) {
		larger = d;
	}
	else {
		larger = c;
	}
	printf("\nGreater function output\n");
	printf("----------------------------\n");
	printf("\nThe larger value is: %6.2lf\n", larger);
	
	return larger;
}

/*Define function that prints an ATM menu-
it receives no parameters and returns no value.*/
void ATM(void) {
	
	printf("\nATM function output\n");
	printf("----------------------------\n");
	printf("\n\t\tWelcome to Goliath Bank ATM Service!\n");
	printf("\t\tPlease select from the options below:\n");
	printf("1)Fast Cash\t\t\t\t\t2)Withdrawal\n");
	printf("3)Transfer\t\t\t\t\t4)Deposit\n");
	printf("5)Account Inquiry\t\t\t\t6)Change Language\n");
}