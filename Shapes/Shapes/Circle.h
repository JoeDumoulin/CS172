#ifndef CIRCLE_H_
#define CIRCLE_H_
#include <iostream>
#include "Shape.h"
using std::string;
using std::cout;
using std::endl;

class Circle : public Shape {
private:
	const double PI = 3.14359;
	double radius;
public:
	Circle() : radius(1) {}
	Circle(string c) : Shape(c), radius(1) {}
	Circle(double rad) : radius(rad) {}
	Circle(string c, double rad) : Shape(c), radius(rad) {}

	double getArea() { 
		cout << "Got to Circle's getArea()" << endl;
		return radius * radius * PI;
	}
};

#endif