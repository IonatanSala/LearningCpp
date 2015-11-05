/**
*
*
* For Loops in c++
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {

  // Demonstrating for loops by doing Fizzbuzz problem: 
  // print numbers from 1 - 100
  // if number is divisible my 3 print Fizz
  // if number is divisible my 5 print Buzz
  // if number is divisible my 3 and 5  print FizzBuzz

  for(int i = 1; i<= 100; i++) {
    if(i % 15 == 0) {
      cout << "FizzBuzz" << endl;
    } else if(i % 3 == 0) {
      cout << "Fizz" << endl;
    } else if(i % 5 == 0 ) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }

  return 0;
}
