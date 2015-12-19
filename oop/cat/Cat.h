#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

class Cat {
private:
  bool happy_;
  string name_;
  string secret_;
  string password_;

public:
  Cat();
  Cat(bool, string, string, string);
  // destructor
  ~Cat();
  void speak();
  void jump();
  void make_happy();
  void make_sad();
  void set_name(string);
  string get_name();
  void set_secret(string, string);
  string get_secret(string);
  void toString();

};




#endif
