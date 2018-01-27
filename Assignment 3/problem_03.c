/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_03.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program performs multiple functions in relation to three 
non-pointer variables with matching pointer variables.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

	//Variable initialization.
	int *iPtr;
	char *cPtr;
	float *fFloat;
	int iNumber;
	char cCharacter;
	float fNumber;
	
	//Prompts user for value input.
	printf("\nPlease enter an integer: ");
	scanf("%d", &iNumber);
	printf("\nPlease enter a character: ");
	scanf(" %c", &cCharacter);
	printf("\nPlease enter a float: ");
	scanf("%f", &fNumber);
	
	//Assigns nonpointer addresses to pointer variables.
	iPtr = &iNumber;
	cPtr = &cCharacter;
	fFloat = &fNumber;
	
	//Prints the value of each nonpointer variable.
	printf("\nNonpointer values:");
	printf("\n---------------------");
	printf("\nThe value of iNumber is %d", iNumber);
	printf("\nThe value of cCharacter is %c", cCharacter);
	printf("\nThe value of fNumber is %f\n", fNumber);
	
	//Prints the value of each pointer variable.
	printf("\nPointer values:");
	printf("\n---------------------");
	printf("\nThe value of *iPtr is %d", *iPtr);
	printf("\nThe value of *cPtr is %c", *cPtr);
	printf("\nThe value of *fFloat is %f\n", *fFloat);
	
	//Prints the address of each nonpointer variable.
	printf("\nNonpointer addresses:");
	printf("\n---------------------");
	printf("\nThe address of iNumber is %p", &iNumber);
	printf("\nThe address of cCharacter is %p", &cCharacter);
	printf("\nThe address of fNumber is %p\n", &fNumber);
	
	//Prints the address of each pointer variable.
	printf("\nPointer addresses:");
	printf("\n---------------------");
	printf("\nThe address of *iPtr is %p", iPtr);
	printf("\nThe address of *cPtr is %p", cPtr);
	printf("\nThe address of *fFloat is %p\n", fFloat);
	
	return 0;
	
}