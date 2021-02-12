#include <iostream>
#include "Tour.h"
#include "Tourist.h"

using namespace std;

int main()
{
	Tour s1;
	Tourist s2;
	s1.SetInfo("group", "Ukraine", "Kiev");
	s2.SetInfo("Ivan", 25, "+380969696152");
	cout << s1.info() << endl << s2.info() << endl;
	return 0;
}
