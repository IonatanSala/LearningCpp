#include "SpreadsheetCell.h"
#include <sstream>
#include <string>

using namespace std;


void SpreadsheetCell::setValue(double inValue) {
	this->value_ = inValue;
	// keep both members in sync by calling protected helper function
	vstring_ = doubleToString(inValue);
}

double SpreadsheetCell::getValue() {
	return this->value_;
}

string SpreadsheetCell::doubleToString(double inValue) {
	stringstream ostr;
	ostr << inValue;
	return (ostr.str());
}

string SpreadsheetCell::getString() {
	return this->vstring_;
}