/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_04.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program is a dice rolling game. It allows a user to toss up
to six dice at one time. It prints the results after the users roll.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

//Function declaration to prevent errors.
int TossDie(int[]);

//Global variable initialization.
int iDieNumber = 6;

int main(int argc, char const *argv[]) {

	//Variable initialization.
	char cResponse = 'y';
	
	//While loop allowing user to roll dice multiple times before program exits.
	while(cResponse == 'y' || cResponse == 'Y') {
		printf("\nHow many dice would you like to roll? Enter 1-6: ");
		scanf("%d", &iDieNumber);
		
		//Error checking for number of dice.
		if(iDieNumber > 6) {
			printf("\nSorry, you can only roll up to 6 Die.\n");
			exit(0);
		}
		
		//Array creation.
		int iArray[iDieNumber];
		TossDie(iArray);
		printf("\nDo you want to roll again? Enter y or n: ");
		scanf(" %c", &cResponse);
		
		//Error checking for user input.
		if(cResponse != 'y' && cResponse != 'Y' && cResponse != 'n' &&cResponse != 'N') {
			printf("\nSorry, could not interpret input... Exiting.\n");
			exit(0);
		}
	}
	printf("\n");
	
	return 0;
}

//TossDie function.
int TossDie(int Array[iDieNumber]) {

	int i;
	srand(time(NULL));
	
	for(i = 0; i < iDieNumber; i++) {
		Array[i] = (rand() % 6) + 1;
		printf("\nDice %d rolled a %d", i + 1, Array[i]);
	}
	
	return 0;
}