/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_02.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 4
Version: 1.0
Description: This program allocates memory for a user's name using the calloc()
function. A user is prompted to enter their name to standard input. The program 
then uses a loop to iterate the memory in order to count the number of 
characters in the users name. The number of characters in the users name is 
then printed to standard output.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	char *myName = NULL;
	int nameSize = 30;
	int rc = 0;
	int i = 0;
	
	//Initialize count at -1 to account for null byte appended to name.
	int count= -1;
	
	myName = (char *)calloc(nameSize, sizeof(char));
	
	if(myName != NULL) {
		printf("Please enter your name:\n");
		fgets(myName, 30, stdin);
	
		while(myName[i] != 0) { //Excludes unused portions of memory
			if(myName[i] != 32) //Excludes spaces
				count += 1;
			
			i++;
		}
		printf("\nLetter count: %d\n", count);
		free(myName);
	}
	else {
		printf("Failed allocating memory\n"); //Error Handling
		rc = -1;
	}
	return rc;
}