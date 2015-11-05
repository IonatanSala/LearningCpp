#include <iostream>
#include <vector>
using namespace std;

// function decleration
void fill_vector(vector<int> &);
// fill_vector
// @param vector<int>& - vector where input will be inputted

void print_vector(const vector<int> &);
// print_vector
// @param const vector<int> & - vector to be printed

int main() {
	vector<int> my_vector;

	fill_vector(my_vector);
	print_vector(my_vector);
	return 0;
}


// function definition
void fill_vector(vector<int>& my_new_vector) {
	cout << "Type in a list of numbers (-1, to stop): ";
	int input;
	cin >> input;

	while(input != -1) {
		my_new_vector.push_back(input);
		cin >> input;
	}

	cout << endl;
}

// print vector
void print_vector(const std::vector<int> & v) {

	for(unsigned int i = 0; i< v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
}