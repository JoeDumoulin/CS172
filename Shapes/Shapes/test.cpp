#include<iostream>
#include<string>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
using namespace std;

int Shape::numShape = 0;

int main()
{
	int inp;
	Shape* sp;

	cout << "Enter 1 if the shape is a square, and 2 if a circle:" << endl;
	cin >> inp;
	if (inp == 1)
		sp = new Square(2.7);
	else if (inp == 2)
		sp = new Circle(2.7);

	cout << sp->getArea() << endl;

	return 0;
}