/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
Code Name: problem_05.cpp
Author: Aaron Williams
Class: CECS 130-50
Assignment 5
Version: 1.0
Description: This program creates a function called length() that returns the
length of a vector based on the formula length(vector)=sqrt(x^2+y^2+z^2), which
means that the length is the square root of the sum of the components squared.
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
			float l;
			float lngth;
			l = ((x*x) + (y*y) + (z*z));
			lngth = pow(l, 0.5);
			cout << "Vector Length = " << setprecision(4) << lngth << endl;
			return lngth;
		}
};

int main() {
	Vector vector1;
	vector1.setComponents(1,2,3);
	vector1.display();
	vector1.length();
	return 0;
}