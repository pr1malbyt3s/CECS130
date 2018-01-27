/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_05.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program reads a users name as input. It then determines
the number of characters and displays the name in uppercase.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

	//Variable initialization.
	int i, l;
	char sName[25] = {'\0'};

	//Gets users name from input.
	printf("\nPlease enter your name: ");
	scanf("%s", sName);
	
	//Bounds checking for name length.
	if(strlen(sName) > 25) {
		printf("\nPlease enter a name less than 25 characters.\n");
		exit(0);
	}
	
	//Determines number of characters in users name.
	l = strlen(sName);
	printf("\nThere are %d characters in your name, %s.\n", l, sName);
	
	//Outputs users name in uppercase.
	printf("\nYour name in uppercase: ");
	for(i = 0; i < l; i++) {
		putchar(toupper(sName[i]));
	}
	printf("\n");
	
	
	return 0;


}