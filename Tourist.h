#ifndef TOURIST_H
#define TOURIST_H

#include <string>

using namespace std;

class Tourist
{
public:
	void Tourist::setPersone(const string& name, const int& age, const string& number)
	{
		if (!name.empty() || age != 0 || !number.empty())
		{
			this->age = age;
			this->name = name;
			this->number = number;
		}
		else
			cerr << "error" << endl;
	}
    void print() const;
private:
    string name, number;
    int age;
};

#endif
