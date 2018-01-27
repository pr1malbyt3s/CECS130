/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_4.c
Author: Aaron Williams
Class: CECS 130-50
Version: 1.0
Description: Gives the result of function f = (a-b)*(x-y) using set values and
a single printf statement.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 1;
	int x = 10;
	int y = 5;
	int f = (a - b) * (x - y);
	printf("The value of f = %d\n", f);
	
	return 0;

}