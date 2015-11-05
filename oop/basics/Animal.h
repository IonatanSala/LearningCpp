#include <iostream>
#include <string>

using namespace std;

class Animal {

	private:
		int height;
		int weight;
		string name;
		// this variables value is going to be shared by every animal object ever created
		static int numOfAnimals;

	public:
		int getHeight(); 
		int getWeight(); 
		string getName(); 
		void setHeight(int); 
		void setName(string); 
		void setWeight(int); 

		Animal();
		
		Animal(int, int, string);

		// destructor
		~Animal();

		static int getNumOfAnimals();

		void toString();
};