// Circle.cpp - implementation of Circle class
#include "Circle.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
    _radius = 1.0;
    numberOfObjects++;
}

Circle::Circle(double radius)
{
    _radius = radius;
    numberOfObjects++;
}

double Circle::getArea() const
{
    return _radius * _radius * PI;
}

double Circle::getRadius() const
{
    return _radius;
}

void Circle::setRadius(double radius)
{
    _radius = radius;
}

int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}

bool operator==(const Circle& c1, const Circle& c2)
{
    return c1.getRadius() == c2.getRadius();
}

bool operator<(const Circle& c1, const Circle& c2)
{
    return c1.getRadius() < c2.getRadius();
}

bool operator<=(const Circle& c1, const Circle& c2)
{
    return c1 < c2 || c1 == c2;
}

bool operator!=(const Circle& c1, const Circle& c2)
{
    return !(c1 == c2);
}

bool operator>(const Circle& c1, const Circle& c2)
{
    return !(c1 <= c2);
}

bool operator>=(const Circle& c1, const Circle& c2)
{
    return !(c1 < c2);
}







