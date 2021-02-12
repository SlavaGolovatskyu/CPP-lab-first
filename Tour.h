#ifndef TOUR_H
#define TOUR_H

#include <string>

using namespace std;

class Tour
{
public:
	string info() const;
	void SetInfo(string type, string route, string rest);
private:
	string type_tour; // group or individual
	string Route; // Route
	string place_of_rest; // Rest 
};

#endif
