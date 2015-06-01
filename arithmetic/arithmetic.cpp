/**
*
* Arithmetic operations in C++
*
*/


#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  // +, -, *, /, %,++,--

  cout << "5 + 10 = "<< 5 + 10 << endl;
  cout << "5 - 10 = "<< 5 - 10 << endl;
  cout << "5 * 10 = "<< 5 * 10 << endl;
  cout << "5 / 10 = "<< 5 / 10 << endl;
  cout << "5 % 10 = "<< 5 % 10 << endl;

  int five = 5;
  cout << "5++ = "<< five++ << endl;
  cout << "++5 = "<< ++five << endl;
  cout << "5-- = "<< five-- << endl;
  cout << "--5 = "<< --five << endl;

  five += 2;
  cout << five << endl;
  five -= 2;
  cout << five << endl;

  // Order of Operations sttes * and / is performed before + and -

  cout << "1 + 2 - 3 * 2 = " << 1 + 2 -3 * 2 << endl;
  cout << "(1 + 2 - 3) * 2 = " << (1 + 2 -3) * 2 << endl;

  cout << "4 / 5 = " << 4 / 5 << endl;
  cout << "4 / 5 = " << (float) 4 / 5 << endl;  // casting


  return 0;
}
