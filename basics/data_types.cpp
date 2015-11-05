// Data types in C++

	// Simple
		// Integral
			// bool
			// char
			// short
			// int
			// long
		// Floating
			// float
			// double
			// long
			// double

	// Address
		// pointer
		// reference

	// Structured
		// array 
		// struct


#include <iostream>
using namespace std;

int main() {

	cout << "size of the int: " << sizeof(int) << endl; 	// 4 bytes
	cout << "size of the int: " << sizeof(long) << endl;	// 8 bytes

	// unsigned int x; 
	// using the unsigned type will allow you to just use positive numbers which will double the values you can have in a type.
	int x;
	int a, b, c;

	unsigned int y = 10;
	cout << "result 10 -12 : " << y - 11 << endl;

}
