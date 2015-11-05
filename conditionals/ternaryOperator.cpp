/**
*
* Ternary Operator in C++
*  variable = (condition) ? true : false;
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  int num = 20;

  int favNum = (num == 20) ? 7 : -1;

  cout << favNum << endl;

  return 0;

}
