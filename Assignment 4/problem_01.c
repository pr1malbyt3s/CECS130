/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_01.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 4
Version: 1.0
Description: This program creates a struct car and creates an instance.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>
#include <string.h>

/*Part 1) Create a structure called car with the following members:
make, model, year, miles */

struct car {
	char *make;
	char *model;
	int year;
	float miles;
};

/*Part 2) Create an instance of the car structure named myCar, and assign
data to each of the members. Print the contents of each member to standard
output using the printf() function */

int main(void) {

	struct car myCar;
	
	myCar.make = "Chevrolet";
	myCar.model = "Silverado";
	myCar.year = 2004;
	myCar.miles = 27984.6;
	
	printf("Make: %-20s\nModel: %-20s\nYear: %-4d\nMiles: %-6.1f\n", 
	myCar.make, myCar.model, myCar.year, myCar.miles);
		
	return 0;

}