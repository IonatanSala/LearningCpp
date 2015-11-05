#include <iostream>
using namespace std;

template <class T>
class MyClass {
	public:
		MyClass(T a) {
			cout << a << " is not a character."  << endl;
		}
};

template <>
class MyClass<char> {
	public:
		MyClass(char a) {
			cout << a << " is a character." << endl;
		}
};

int main() {
	MyClass<int> a(10);
	MyClass<double> c(10.5);
	MyClass<char> b('h');
	return 0;
}