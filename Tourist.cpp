#include "Tourist.h"
#include <string>

using namespace std;

// get
string Tourist::info() const
{
	return "Name: " + name + ", Age: " + to_string(age) + ", Phone number: " + number;
}

// set
void Tourist::SetInfo(string Name, int Age, string Number)
{
	name = Name;
	age = Age;
	number = Number;
}

