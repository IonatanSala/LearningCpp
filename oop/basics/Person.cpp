#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
	this->name_ = "Default";
	this->age_ = 0;
	this->gender_ = 'X';
}
	
Person::Person(string name, int age, char gender) {
	this->name_ = name;
	this->age_ = age;
	this->gender_ = gender;
}

void Person::printPerson() {
	cout << "Hi my name is " << this->name_ << " and I'm " << this->age_ << " years old." << endl;
}