#ifndef TOURIST_H
#define TOURIST_H

#include <ctime>
#include <string>

using namespace std;

class Tourist
{
	string name, number;
	int age;
public:
	// set
	void setPersone(string Name, int Age, string Number)
	{
		name = Name;
		age = Age;
		number = Number;
	}
	// get
	void info() const
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Phone number: " << number << endl;
	}
};

#endif
