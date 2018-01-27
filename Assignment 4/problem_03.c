/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_03.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 4
Version: 1.0
Description: This program incorporates the file superheroes.dat. This program
uses the fscanf() function to read each record from superheroes.dat and prints
field information from the records to standard output.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	FILE *fp;
	char readLine[100];
	char *fileName = "superheroes.dat";
	fp = fopen(fileName, "r");
	
	if(fp != NULL) {
		fprintf(stdout, "\nReading: %s\n", fileName);
		int i = 1;
		while(!feof(fp)) {
			fscanf(fp, "%100[^\n]\n", readLine); //Ingests entire line.
			printf("\nSuperhero %d: %s", i, readLine);
			i++;
		}
		fclose(fp);
	}
	
	//Error handling.
	else {
		perror("The following error occured");
		fprintf(stderr, "\nCannot open %s.\n\n", fileName);
	}
	printf("\n");
	return 0;
}