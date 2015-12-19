#include <iostream>
#include "Cat.h"

using namespace std;


// default constructor
Cat::Cat() {
  happy_ = true;
  name_ = "Monty";
  secret_ = "Im a cat called Monty";
  password_ = "pass";
}


// constructor
Cat::Cat(bool happy, string name, string secret, string password) : happy_(happy), name_(name), secret_(secret), password_(password) {

}


// destructor
Cat::~Cat() {
  cout << "Cat destructor called and destroyed instance of Cat" << endl;
}


void Cat::speak() {
  if(happy_) {
    cout << "Meowww!" << endl;
  } else {
    cout << "Sssss!" << endl;
  }
}


void Cat::jump() {
  cout << "Jumping to top of bookcase" << endl;
}


void Cat::make_happy() {
  happy_ = true;
}


void Cat::make_sad() {
  happy_ = false;
}

void Cat::set_name(string name) {
  name_ = name;
}

string Cat::get_name() {
  return name_;
}

void Cat::set_secret(string secret, string password) {
  if(password == password_) {
    secret_ = secret;
    cout << "Secret has been changed";
  } else {
    cout << "Cannot change secret as the password was incorrect";
  }
}

string Cat::get_secret(string password) {
  if(password == password_) {
    return secret_;
  } else {
    return "The secret cannot be returned as the password was incorrect";
  }
}

void Cat::toString() {
  cout << "Hi my name is " << name_ << endl;
}
