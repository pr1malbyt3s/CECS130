/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_03.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 2
Version: 1.0
Description: This program prompts the user for three different inputs: 1) A
number to begin counting from, 2) A number to end counting at, 3) A number for
the increment count. Depending on if the begin or end number is larger, it will
count up or down and display the results of the count to the user.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(void) {
	
	int iBegin, iEnd, iIncrement, i;
	
	//Ask user for input and store variables.
	printf("\nEnter number to start counting from: \n");
	scanf("%d", &iBegin);
	printf("\nEnter number to end counting at: \n");
	scanf("%d", &iEnd);
	printf("\nEnter count increment: \n");
	scanf("%d", &iIncrement);
	printf("\nCOUNT\n");
	printf("--------\n");
	
	//If begin = end, inform the user that end and begin numbers are equal.
	if(iBegin == iEnd) {
		printf("Begin and end both equal %d", iEnd);
	}
	
	//If begin < end, the program will count up.
	if(iBegin < iEnd) {
		for(i = iBegin; i <= iEnd; i = i + iIncrement)
			printf("%d\n", i);
	}

	//If begin > end, the program will count down.
	if(iBegin > iEnd) {
		for(i = iBegin; i >= iEnd; i = i - iIncrement)
			printf("%d\n", i);
	}

	return 0;
}
