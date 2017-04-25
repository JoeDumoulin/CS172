#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string _name;

public:
	Person(string name);

	string getName();
	string think();
};

#endif