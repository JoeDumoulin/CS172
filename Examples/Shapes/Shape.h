#ifndef SHAPES_H_
#define SHAPES_H_
#include <string>

using namespace std;


class Shape
{
private:
	string _color;
public:
	Shape(string color) {
		_color = color;
	}

	string getColor() {
		return _color;
	}


	virtual double Area() = 0;
};



#endif // SHAPES_H_
