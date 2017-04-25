#include "person.h"

Person::Person(string name) {
	_name = name;
}

string Person::getName() {
	return _name;
}

string Person::think() {
	return "hmm...";
}
