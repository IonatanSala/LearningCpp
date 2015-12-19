#include <iostream>
using namespace std;

void manipulate(int *);

int main() {

  int value = 8;

  int *value_pointer = &value;

  cout << "Value of value_pointer: " << *value_pointer << endl;
  cout << "Address of value_pointer " << value_pointer << endl;

  cout << "===================================" << endl;
  int int_value = 123;
  cout << "1. int_value: " << int_value << endl;
  manipulate(&int_value);
  cout << "2. int_value: " << int_value << endl;

  return 0;
}


void manipulate(int *value) {
  cout << "2. value: " << *value << endl;
  *value = 10;
  cout << "3. value: " << *value << endl;
}
