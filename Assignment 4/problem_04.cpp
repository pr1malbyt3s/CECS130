/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_04.cpp
Author: Aaron Williams
Class: CECS 130-50
Assignment 4
Version: 1.0
Description: This program has two parts associated with it to support answering
questions regarding the size of a string and the length of an array. Part a
determines the length of the array char s[] = "Hello World" and part b
determines the size of the string "Hello World".
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <string>
#include <iostream>
#include <cstring>
 
 int main(int argc, char const *argv[]) {
	
	using std::cout;
	using std::endl;
	using std::string;
	
	//Part A
	char s[] = "Hello World";
	cout << "char s[] = " << s << endl;
	cout << "Length of s = " << strlen(s) << "." << endl;
	
	cout << " " << endl;
	
	//Part B
	string s1;
	string str = "Hello World"; //strcpy not used in c++, str.copy() used for char arrays
	s1 = str; //Copies "Hello World" to s1
	cout << "String s1  = " << s1 << endl;
	cout << "Size of s1 = " << s1.length() << "." << endl; //Could also be accomplished by using strlen(s1.c_str())
	
	return 0;
		
}