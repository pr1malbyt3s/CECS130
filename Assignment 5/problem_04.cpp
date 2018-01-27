/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_04.cpp
Author: Aaron Williams
Class: CECS 130-50
Assignment 5
Version: 1.0
Description: This program overloads the + symbol to become vector addition.
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
		}
		
		//display function to display vector as (x,y,z).
		void display() {
			cout << "Vector = (" << x << "," << y << "," << z << ")" << endl;
		}
		
		//+ sign overloading to add vectors.
		Vector operator+(const Vector& a) {
			Vector b;
			b.x = this->x+a.x;
			b.y = this->y+a.y;
			b.z = this->z+a.z;
			return b;
		
		}
};

int main() {
	Vector vector1;
	Vector vector2;
	vector1.setComponents(1,2,3);
	vector2.setComponents(4,5,6);
	cout << "Vector 1:" << endl;
	vector1.display();
	cout << endl;
	cout << "Vector 2:" << endl;
	vector2.display();
	cout << endl;
	Vector vector3 = vector1 + vector2;
	cout << "Vector 3:" << endl;
	vector3.display();
	return 0;
}