/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_06.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program creates an array of strings. It then uses the 
strcmp() function to display each states name in alphabetical order.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <string.h>

//Function declaration to prevent errors.
int sort(char *[]);

int main(int argc, char const *argv[]) {
		
		//Variable initialization.
		int i;
		int numStates = 4;
		char *states[4] = {0};
		
		//Assign states to the array.
		states[0] = "Florida";
		states[1] = "Oregon";
		states[2] = "California";
		states[3] = "Georgia";
		
		//Shows the original order of the states array.
		printf("\nCurrent order: ");
		printf("\n--------------\n");
		for(i = 0; i < numStates; i++) {
			printf("%s", states[i]);
			printf("\n");
		}
		
		//Call the sort function.
		sort(states);
		
		//Shows the sorted states array.
		printf("\nAlphabetized order: ");
		printf("\n-------------------\n");
		for(i = 0; i < numStates; i++) {
			printf("%s", states[i]);
			printf("\n");
		}
		
		return 0;
}

//Sort function.
int sort(char *Array[]) {

	int a, b;
	int numStates = 4;
	char *sTemp;
	
	for(a = 0; a < numStates - 1; a++) {
		for(b = a + 1; b < numStates; b++) {
			if((strcmp(Array[a], Array[b])) > 0) {
				sTemp = Array[a];
				Array[a] = Array[b];
				Array[b] = sTemp;
			}
		}
	}
	
	return 0;
}