#ifndef TOUR_H
#define TOUR_H

#include <ctime>
#include <string>

using namespace std;

class Tour
{
	time_t startTour;
	time_t endTour;
	string type_tour; // group or individual
	string Route; // Route
	string place_of_rest; // Rest 
public:
	void info() const
	{
		cout << "Type Tour: " << type_tour << endl;
		cout << "Route: " << Route << endl;
		cout << "Place of test: " << place_of_rest << endl;
		cout << "Start Tour: " << asctime(localtime(&startTour));
		cout << "End Tour: " << asctime(localtime(&endTour));
	}
	void setTour(time_t starttour, time_t endtour, string type, string route, string rest)
	{
		startTour = starttour;
		endTour = endtour;
		type_tour = type;
		Route = route;
		place_of_rest = rest;
	}
};

#endif
