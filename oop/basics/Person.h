#include <string>
using namespace std;

class Person {

	string name_;
	int age_;
	char gender_;

	public:
		Person(string, int, char);
		Person();
		void printPerson();

};