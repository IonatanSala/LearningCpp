/**
*
*
* Arrays in c++
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  int myFavNums[5];

  int badNums[5] = {1,2,3,4,5};

  cout << "The first num in the array " << badNums[0] << endl;

  char myName[2][7] = {
    {'J', 'o', 'n', 'a', 't', 'a', 'n'},
    {'S','a','l','a'}
  };

  cout << "2nd letter in 2nd array is : " << myName[1][1] << endl;

  myName[1][1] = 't';

  cout << "2nd letter in 2nd array is different now : " << myName[1][1] << endl;


}
