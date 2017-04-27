#include <string>
#include <iostream>
#include "Shape.h"
#include "Square.h"

using namespace std;


int main()
{
	Square s("red", 4);
	cout << typeid(s).name() << endl;

	Shape* a = new Square("purple", 100);
	cout << "a is of type " << typeid(*a).name() << endl;
}