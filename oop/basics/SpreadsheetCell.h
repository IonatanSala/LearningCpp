#include <string>
using namespace std; 

class SpreadsheetCell {
	public:
		void setValue(double inValue);
		double getValue();
		void setString(string inString);
		string getString();

	protected:
		string doubleToString(double inValue);
		double stringToDouble(string inString);

		double value_;	// numeric rep. of contents
		string vstring_;  // string rep. of contents
};