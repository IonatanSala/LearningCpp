#include <iostream>

using namespace std;

int main() {
	// Pointers - store the address of a variable
	// (*) ==> dereference operator
	// *p1 ==> returns value of the variable the pointer is pointing to
	// p1 ==> returns address of where variable is stored
	// &p1 ==> returns the address of the pointer (*p1)
	int num1 = 8,
		*p1 = &num1;

	cout << "Value of num1: " << num1 << endl;
	cout << "Address of num1 " << &num1 << endl;
	cout << "Value of *p: " << *p1 << endl;
	cout << "Address of *p: " << p1 << endl;
	cout << "Address of &p: " << &p1 << endl;

	int one = 10,
		two = 5;

	int *pointer_1 = &one,
		*pointer_2 = &two;

	cout << "Pointer 1: " << *pointer_1 << endl;
	cout << "Pointer 2: " << *pointer_2 << endl;

	*pointer_1 = *pointer_2;

	cout << "Pointer 1: " << *pointer_1 << endl;
	cout << "Pointer 2: " << *pointer_2 << endl;

	*pointer_1 = 15;
	cout << "Pointer 1: " << *pointer_1 << endl;
	cout << "Pointer 2: " << *pointer_2 << endl;

	pointer_1 = pointer_2;

	*pointer_1 = 201;

	cout << "Pointer 1: " << *pointer_1 << endl;
	cout << "Pointer 2: " << *pointer_2 << endl;

	int *my_pointer_array = nullptr;
	my_pointer_array = new int[10];

	delete[] my_pointer_array;

	

	

	return 0;
}