#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Format: vector<data_type> name_of_vector
	// my_vector.push_back(value) ==> adds an elemnt to the END of the vector (also resizes it)
	// my_vector.at(index) ==> return element at specified index number
	// my_vector.size() ==> returns an unsigend int equal to the number of elements
	// my_vector.begin() ==> reads vector from first element (index 0)
	// my_vector.insert(my_vector.begin() + integer, new value) ==> adds element BEFORE specified index number
	// my_vector.erase(my_vector.begin() + integer) ==> removes element AT specified index number
	// my_vector.clear() ==> removes all elements in vector
	// my_vector.empty() ==> returns boolean value based on weather the vector is empty or not

	// declare vector
	vector<int> my_vector;
	if(my_vector.empty()) {
		cout << "The vector is empty" << endl;;
	}

	// add number into vector
	my_vector.push_back(3);
	my_vector.push_back(6);
	my_vector.push_back(9);
	my_vector.push_back(12);

	if(!my_vector.empty()) {
		cout << "The vector is not empty" << endl;
	}

	cout << "Vector: ";

	for(unsigned int i = 0; i<my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}
	// adds something to the begining
	my_vector.insert(my_vector.begin(), 5);

	cout << endl << "Vector now: ";
	for(unsigned int i = 0; i<my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}

	// remove the element at index 4
	my_vector.erase(my_vector.begin() + 4);


}