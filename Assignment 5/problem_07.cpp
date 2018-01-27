/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_07.cpp
Author: Aaron Williams
Class: CECS 130-50
Assignment 5
Version: 1.0
Description: This program uses a main function to bring the vector class
together by creating two instances, adding them, and displaying each vectors
parameters and length.
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <cmath>
#include <iomanip>
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
		
		//length function that calculates and displays vector length.
		double length() {
			double l = ((x*x) + (y*y) + (z*z));
			double lngth = pow(l, 0.5);
			cout << "Vector Length = " << setprecision(4) << lngth << endl;
			return lngth;
		}
		
		//== overloading that returns true if vector lengths are equal.
		bool operator==(const Vector& c) {
			double d1 = ((x*x) + (y*y) + (z*z));
			double d2 = ((c.x*c.x) + (c.y*c.y) + (c.z*c.z));
			if (d1 == d2)
				return true;
			else
				return false;
		}
};

int main() {
	Vector vector1;
	Vector vector2;
	vector1.setComponents(1,2,3);
	vector2.setComponents(4,5,6);
	Vector vector3 = vector1 + vector2;
	cout << "Vector 1:" << endl;
	vector1.display();
	vector1.length();
	cout << endl;
	cout << "Vector 2:" << endl;
	vector2.display();
	vector2.length();
	cout << endl;
	cout << "Vector 3:" << endl;
	vector3.display();
	vector3.length();
	return 0;
}