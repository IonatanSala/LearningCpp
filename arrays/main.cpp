#include <iostream>

using namespace std;

const int CAPACITY = 1000;

int main() {
	// data_type variable_name[number_of_elements]
	int *dArray;
	dArray = new int[CAPACITY];

	dArray[0] = 1;
	dArray[1] = 3;
	dArray[2] = 5;
	dArray[3] = 7;

	for (int i = 0; i < 4; ++i) {
		cout << dArray[i] << " ";
	}

	delete [] dArray;


	return 0;
}