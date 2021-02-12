#ifndef TOURIST_H
#define TOURIST_H

#include <string>

using namespace std;

class Tourist
{
public:
	string info() const;
	void SetInfo(string Name, int Age, string Number);
private:
	string name;
	int age;
	string number;
};

#endif
