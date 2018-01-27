/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_02.c
Author: Aaron Williams
Class: CECS 130-50
Assignment 2
Version: 1.0
Description: This program counts backward from 100 to 1 in increments of 10.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <stdio.h>

int main(void) {

	int i;
	
	//Simple for-loop using hardcoded values.
	for(i = 100; i >= 1; i = i - 10)
		printf("%d\n", i);
	return 0;	

}