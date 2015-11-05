/**
*
* If statements in c++
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  int age = 20;

  if(age < 20) {
    cout << "You are younger than 20" << endl;
  } else if(age >= 20 && age <= 30) {
    cout << "You are inbetween 20 and 30 years old" << endl;
  } else {
    cout << "You are older than 30" << endl;
  }


  return 0;
}
