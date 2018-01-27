/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_01.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 2
Version: 1.0
Description: Program generates a random number between 1 and 10. Program prompts
a user to guess the random number. The users input is checked to ensure a digit
has been inputted, and the program then informs the user whether the guess was
right or wrong.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	
	char Input[] = "10";
	int iRandomNum = 0;
	int iGuess = 0;
	srand(time(NULL));

	printf("\nI'm thinking of a number between 1 and 10. Enter your best guess: \n");
	scanf("%s", Input);
	iGuess = atoi(Input);
	
	if(isdigit(Input[0]) && iGuess <= 10 && iGuess > 0) {
		iRandomNum = (rand() % 10) + 1;
		if(iGuess == iRandomNum) {
			printf("\nCorrect! The number is %d\n", iRandomNum);
		}
		else {
			printf("\nSorry, that's incorrect. The number is %d\n", iRandomNum);
		}
	}
	
	else {
		printf("\nPlease enter an appropriate guess.\n");
	}
	return 0;
	
}
