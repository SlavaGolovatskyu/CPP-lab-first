#include "Tour.h"

#include <string>

using namespace std;

// get
string Tour::info() const
{
	return "Type: " + type_tour + ", Route: " + Route + ", Place of rest: " + place_of_rest;
}

// set
void Tour::SetInfo(string type, string route, string rest)
{
	type_tour = type;
	Route = route;
	place_of_rest = rest;
}


