#include <iostream>

using namespace std;

// print - prints the value a pointer is point to
// int* - pointer that is pointing to an integer
void print(int*);

int main() {
	// no value this pointer is pointing to
	int *p1;

	p1 = new int;  // point to an unknown integer address in memory

	*p1 = 7;  // specifiy the number at the above address

	cout << "Pointer 1 : " << *p1 << endl;

	print(p1);

	return 0;
}

void print(int *my_pointer) {
	cout << "Pointer in print function : " << *my_pointer << endl;
}