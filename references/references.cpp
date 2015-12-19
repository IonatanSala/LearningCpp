#include <iostream>
using namespace std;

void change_me(double &);

int main() {

  int value1 = 7;
  // this means that value2 is a reference to value1
  int &value2 = value1;
  value2 = 10;

  cout << "Value1: " << value1 << endl;
  cout << "Value2: " << value2 << endl;

  double value = 3.14;
  change_me(value);
  cout << value << endl;

  return 0;
}


void change_me(double &value) {
  value = 123.5;
}
