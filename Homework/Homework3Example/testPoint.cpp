// testPoint.cpp - test the Point class
//  compile with: g++ testPoint.cpp -o test
#include <iostream>
#include "Point.h"


int main()
{
    Point origin;
    Point other(10.0, 30.5);

    // distance of other point from the origin:
    std::cout << "Distance from the origin: " << 
        origin.distance(other) << std::endl;

    std::cout << "Distance of the origin from other point:: " << 
        other.distance(origin) << std::endl;
    
    
    // static distance of other point from the origin:
    std::cout << "Distance from the origin: " << 
        Point::distance(origin, other) << std::endl;

    std::cout << "Distance of the origin from other point:: " << 
        Point::distance(other, origin) << std::endl;
    
    
    
}
