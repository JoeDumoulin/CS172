#include <iostream>
#include <string>
#include "person.h"
#include "engineer.h"
using namespace std;

int main()
{
	Person p("Joe");
	Engineer e("Mary");

	cout << p.getName() << " is thinking: " << p.think() << endl;
	cout << e.getName() << " is thinking: " << e.think() << endl;
	cout << "\tand " << e.getName() << " is also designing: " << e.design() << endl;

	return 0;
}
