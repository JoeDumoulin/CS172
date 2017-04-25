#ifndef SHAPE_H_
#define SHAPE_H_

#include<string>
using std::string;

class Shape {
private:
	static int numShape;
	int id;
	string color;
public:
	static void SetNumShapes(int id) { numShape = id; }
	Shape() { id = ++numShape; color = "none"; }
	Shape(string c) : color(c) { id = ++numShape; }
	void setColor(string c) { color = c; }
	int getId() { return id; }
	string getColor() { return color; }

	void operator=(Shape& S) { color = S.color; }

	virtual double getArea() = 0;
};

#endif