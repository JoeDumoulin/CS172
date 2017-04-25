#ifndef SQUARE_H_
#define SQUARE_H_
#include <iostream>
#include "Shape.h"
using std::string;
using std::cout;
using std::endl;

class Square : public Shape {
private:
	double sideL;
public:
	Square() : sideL(1) {}
	Square(string c) : Shape(c), sideL(1) {}
	Square(double s) : sideL(s) {}
	Square(string c, double s) : Shape(c), sideL(s) {}

	double getArea() { 
		cout << "Got to Square's getArea()" << endl;
		return sideL * sideL; 
	}
};

#endif