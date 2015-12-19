#include <iostream>

using namespace std;

int main() {

	string texts[] = {"one", "two", "three", "another"};

	// pointer to our array
	string *p_texts = texts;

	int array_size = sizeof(texts)/sizeof(string);

	for(int i = 0; i<array_size; i++) {
		cout << p_texts[i] << " " << flush;
	}

	cout << endl;

	for(int i = 0; i<array_size; i++, p_texts++) {
		cout << *p_texts << " " << flush;
	}

	cout << endl;

	// point to the start of texts
	string *p_elements = texts;
	// point to the end of texts
	string *p_end = &texts[array_size - 1];

	while(true) {
		cout << *p_elements << " " << flush;

		if(p_elements == p_end) {
			break;
		}
		p_elements++;
	}

	return 0;
}
