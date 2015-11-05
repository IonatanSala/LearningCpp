/**
*
* While loops in c++
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  // rand() generates a number between 0 - 1;
  int randNum = (rand() % 100) + 1;  // will get value between 1 - 100


  while(randNum != 100) {
    cout << randNum << endl;

    randNum = (rand() % 100) + 1;
  }

  cout << randNum << endl;
  return 0;
}
