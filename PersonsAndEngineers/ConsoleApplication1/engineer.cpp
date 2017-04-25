#include "engineer.h"

Engineer::Engineer(string name) : Person(name){}

string Engineer::design() {
	return "Can we build it? Yes we can!";
}