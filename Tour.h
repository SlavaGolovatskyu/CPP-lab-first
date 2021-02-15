#ifndef TOUR_H
#define TOUR_H

#include <string>

using namespace std;

class Tour
{
	string type_tour; // group or individual
	string Route; // Route
	string place_of_rest; // Rest 
public:
	void info() const
	{
		cout << "Type Tour: " << type_tour << endl;
		cout << "Route: " << Route << endl;
		cout << "Place of test: " << place_of_rest << endl;
	}
	void setTour(string type, string route, string rest)
	{
		type_tour = type;
		Route = route;
		place_of_rest = rest;
	}
};

#endif
