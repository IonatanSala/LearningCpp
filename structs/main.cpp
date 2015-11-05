#include <iostream>
#include <string>
using namespace std;
/*
	struct type_name {
		member_type1 memeber_name1;
		memeber_type2 member_name2;
		member_type3 member_name3;
	} object_names;
*/

struct person {
	string name;
	int age;
	string gender;
} jono;

int main() {

	jono.name = "Jonatan";
	jono.age = 20;
	jono.gender = "Male";

	cout << jono.name << endl;
	return 0;
}