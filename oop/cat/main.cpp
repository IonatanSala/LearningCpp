#include <iostream>
#include "Cat.cpp"

using namespace std;


int main() {
  // created a cat object
  Cat kitty(true, "Kitty", "I'm a cat", "password");
  Cat bob(false, "Bob", "I'm a male cat", "toxic");
  Cat mont;
  // call speak() because it's public
  kitty.speak();
  bob.speak();

  cout << bob.get_name() << endl;
  bob.set_name("Bobby");
  cout << bob.get_name() << endl;
  mont.toString();

  cout << kitty.get_secret("password") << endl;
  cout << bob.get_secret("tox") << endl;
  return 0;
}
