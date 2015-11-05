/**
*
* Switch statements in c++
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  int greetinOption = 2;

  switch (greetinOption) {
    case 1:
      cout << "Hello" << endl;
      break;
    case 2:
      cout << "Hallo" << endl;
      break;
    default:
      cout << "How are you" << endl;
  }

  return 0;

}
