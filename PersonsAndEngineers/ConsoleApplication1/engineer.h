#ifndef _ENGINEER_H_
#define _ENGINEER_H_

#include "person.h"

class Engineer : public Person {
public:
	Engineer(string name);
	string design();
};

#endif