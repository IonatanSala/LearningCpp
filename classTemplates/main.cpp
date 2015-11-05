#include <iostream>

using namespace std;

template <class T>

class Jonatan {
	T first, second;

	public:
		Jonatan(T, T);
		T bigger();
};

template <class T>
Jonatan<T>::Jonatan(T a, T b) {
	this->first = a;
	this->second = b;
}

template <class T>
T Jonatan<T>::bigger() {
	return (this->first > this->second ? this->first : this->second);
}

int main() {
	Jonatan <int> jono(7,8);
	cout << jono.bigger() << endl;
	Jonatan <double> sal(20,43);
	cout << sal.bigger() << endl;
	return 0;
}