/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_02.cpp
Author: Aaron Williams
Class: CECS 130-50
Assignment 5
Version: 1.0
Description: This program adds a setComponents function that will mutate 
(modify) the vector instance and set its components to the three parameters 
x, y, z passed to the function respectively.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

class Vector {
	private:
		//Declaration of variables.
		float x;
		float y;
		float z;
	
	public:
		//Constructor which initializes vector to (0,0,0).
		Vector() {
			x = 0;
			y = 0;
			z = 0;
			
		}
		
		//setComponents function that mutates the vector.
		void setComponents(float x1, float y1, float z1) {
			x = x1;
			y = y1;
			z = z1;
			cout << "Vector = (" << x << "," << y << "," << z << ")" << endl;
		}
};

int main() {
	Vector vector1;
	vector1.setComponents(1,2,3);
	return 0;
}