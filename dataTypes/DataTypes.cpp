// This is a comment

/*
* multiple line commenting in C++
*
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {


  const double PI = 3.14; // This is a constant of data type double in c++
  char myGrade = 'A';   // A character
  bool isHappy = true;
  float favNum = 3.14159; // Floating point number
  double otherFavNum = 1.618033; // Double
  int myAge = 20; // This is an integer

  /*
  * Other types include
  *   short int : At leat 16 bits
  *   long int : At leat 32 bits
  *   long long int : At leat 64bits
  *   unsigned int : Same size as signed version
  *   long double : Not less then double
  */

  // sizeof() gets the size of the variable in bytes.
  int myAgeSize = sizeof(myAge);

  cout << "The size of my age is : "<< myAgeSize << endl;

  return 0;
}
