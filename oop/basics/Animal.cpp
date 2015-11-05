#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, string name) {
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;
}

Animal::Animal() {
	this -> height = 20;
	this -> weight = 2;
	this -> name = "Frog";
}

Animal::~Animal() {
	cout << "Animal " << this -> name << " destroyed" << endl;
}

int Animal::getHeight() {
	return this->height;
}

int Animal::getWeight() {
	return this->weight;
} 

string Animal::getName() {
	return this->name;
}

void Animal::setHeight(int height) {
	this->height = height;
}

void Animal::setWeight(int weight) {
	this->weight = weight;
} 

void Animal::setName(string name) {
	this->name = name;
}

void Animal::toString() {
	cout << this -> name << " is " << this -> height << " cms tall and " << this -> weight << "kgs in weight" << endl;
}