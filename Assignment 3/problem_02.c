/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_02.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 3
Version: 1.0
Description: This program is a GPA average calculator. The user is prompted to 
store up to 30 GPAs. After each GPA, the user is given the option to display the
current average or enter the next GPA. The average of all entered GPAs will be 
displayed once all GPAs are entered.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	//Variable initialization.
	int iSize, i;
	double dAverage, dTotal;
	char cChoice;
	
	//Prompt user for number of GPAs to enter.
	printf("\nHow many GPAs would you like to enter? (30 is the max.): ");
	scanf("%d", &iSize);
	
	//Quick bounds check for number of GPAs.
	if(iSize > 30) {
		printf("\n%d is too many GPAs to calculate.\n", iSize);
		exit(0);
	}
	
	//Initialize GPA array.
	double dArray[iSize];
	
	/*Prompt user to input GPA values. Give option for
	average output after each GPA is entered. */
	for(i = 0; i < iSize; i++) {
		printf("\nEnter GPA %d: ", i + 1);
		scanf("%lf", &dArray[i]);
		dTotal += dArray[i];
		dAverage = (dTotal / (i + 1));
		printf("\nWould you like to calculate the current average? Enter Y or N: ");
		scanf(" %c", &cChoice);
		if(cChoice == 'y' || cChoice == 'Y') {
			printf("\nCurrent average = %1.2lf", dAverage);
		}
		if(cChoice != 'y' && cChoice != 'Y' && cChoice != 'n' && cChoice != 'N') {
			printf("\nCouldn't interpret response, moving on.");
		}
		continue;
	}
	
	//Print summary of GPAs and total average.
	printf("\nSummary:");
	printf("\n-----------\n");
	for(i = 0; i < iSize; i++) {
		printf("\nGPA %d = %1.2lf", i + 1, dArray[i]);
	}
	printf("\nTotal average = %1.2lf\n", dAverage);
	
	return 0;
	
}