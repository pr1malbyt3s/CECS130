/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_01.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program stores 10 numbers input by the user. After the user
has input 10 numbers, they will be given the option to print the numbers in
ascending or descending order.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(int agrc, char const *argv[]) {

	//Variable initialization.
	int i, a, b, iResponse, iTemp;
	double dArray[10];
	
	//User input by number.
	for(i = 1; i < 11; i++) {
		printf("\nPlease enter number %d: ", i);
		scanf("%lf", &dArray[i - 1]);
	}
	
	//Sorts the array in ascending order.
	for(a = 0; a < 9; a++) {
		for(b = 0; b < 9; b++) {
			if (dArray[b + 1] < dArray[b]) {
				iTemp = dArray[b];
				dArray[b] = dArray[b + 1];
				dArray[b + 1] = iTemp;
			}
		}
	}
	
	//Prompts user for sorting decision.
	printf("\nYou have two sorting options, ascending or descending.\n");
	printf("For ascending, enter 1. For descending, enter 2: ");
	scanf("%d", &iResponse);
	
	//Ascending response. Prints the array in ascending order.
	if(iResponse == 1) {
		printf("\nThe array sorted in ascending order:\n");
		for(i = 0; i < 10; i++) {
			printf("%6.2lf\n", dArray[i]);
		}
	}
	
	//Descending response. Prints the array in descending order.
	if(iResponse == 2) {
		printf("\nThe array sorted in descending order:\n");
		for(i = 9; i >= 0; i--) {
			printf("%6.2lf\n", dArray[i]);
		}
	}
	
	//Validates user input for sorting option.
	if(iResponse != 1 && iResponse != 2) {
		printf("\nPlease enter a valid option.\n");
	}
	
	
	
	return 0;
}