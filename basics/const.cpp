#include <iostream>
using namespace std;

class Animal {
private:
	string name_;

public:
	void set_name(string name) { name_ = name; }
	void speak() const { cout << "My name is: " << name_ << endl; }
};

int main() {

	const double PI = 3.1415;
	cout << PI << endl;

	Animal animal;
	animal.set_name("Jono");
	animal.speak();

	int value = 7;
	const int *p_value = &value;
	// this will give error if you try change address of pointer
	// int * const p_value = &value;

	cout << "*p_value: " << *p_value << endl;

	int number = 11;
	p_value = &number;
	// error with this bevause there is const before the pointer
	// *p_value = 23;
	cout << "*p_value: " << *p_value << endl;

	return 0;
}
