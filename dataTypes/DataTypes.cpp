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


  // In C if you wanted to make a string you would have to do the following:
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y' , '\0'};

  // The standard C++ library provides a string class
  // #include <string>
  string birthdayString = " Birthday";
  cout << happyArray + birthdayString << endl;

  string yourName;

  cout << "What is your name ";
  getline(cin, yourName);

  cout << "hello " << yourName << endl;

  double eulersConstant = .57721;
  string eulerGuess;
  double eulerGuessDouble;

  cout << "What is eulers constant ";
  getline(cin, eulerGuess); // read in line and stroe in eulerGuess
  eulerGuessDouble = stod(eulerGuess);  // convert string to double

  if(eulerGuessDouble == eulersConstant) {
    cout << "You are right " << endl;

  } else {
    cout << "You are wrong" << endl;
  }

  cout << "Size of String " << eulerGuess.size() << endl;
  cout << "Is the string empty  " << eulerGuess.empty() << endl;
  cout << eulerGuess.append(" was your guess") << endl;

  string dogString = "dog";
  string catString = "cat";

  // compares them alphabetically
  cout << dogString.compare(catString) << endl;
  cout << dogString.compare(dogString) << endl;
  cout << catString.compare(dogString) << endl;

  string anotherDog = dogString.assign(dogString);
  string myName = "Jonatan";
  // The 0 is the starting index you want to start at
  // and the 5 is the specified number of characters you want to pull from there
  string partOfMyName = myName.assign(myName, 0, 5);

  // Search on a string
  int lastNameIndex = myName.find("Jona", 0);
  cout << "Index for my name " << lastNameIndex << endl;

  myName.insert(5, "Jonatan");
  cout << myName << endl;

  myName.erase(6, 7);
  cout << myName << endl;





  return 0;
}
