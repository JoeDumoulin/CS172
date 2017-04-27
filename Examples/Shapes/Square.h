#pragma once
#include <string>
#include "Shape.h"

using namespace std;

class Square : public Shape
{
private:
	double _side;
public:

	Square(string color, double side) : Shape(color)
	{
		_side = side;
	}
	double Area()
	{
		return _side*_side;
	}
	
};