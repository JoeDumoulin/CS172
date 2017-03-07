// intersection.cpp - use the Point class and the LinearEquation class 
// to solve for the intersection of two lines.
//
// compile with g++ intersection.cpp -o intersection
// test with: 2 2 5 -1.0 4.0 2.0 -1.0 -2.0
// another test: 2 2 7 6.0 4.0 2.0 -1.0 -2.0
#include <iostream>
#include "Point.h"
#include "LinearEquation.h"

int main(){
    // prompt for some points
    double x1, y1, x2, y2, x3, y3, x4, y4 = 0;
    std::cout << "enter the endpoints of the two line segments below" << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    std::cout << "you entered the following points:" << std::endl;
    std::cout << "(x1, y1) = (" << x1 << ", " << y1 << "), " << std::endl;
    std::cout << "(x2, y2) = (" << x2 << ", " << y2 << "), " << std::endl;
    std::cout << "(x3, y3) = (" << x3 << ", " << y3 << "), " << std::endl;
    std::cout << "(x4, y4) = (" << x4 << ", " << y4 << "), " << std::endl;


    // define two line segments (optional)
//    Point line1[] = {Point(x1, y1), Point(x2, y2)};
//    Point line2[] = {Point(x3, y3), Point(x4, y4)};

    // get the coefficients of the linear equations
    double a = y1-y2;
    double b = x1-x2;
    double c = y3-y4;
    double d = x3-x4;

    // calculate e and f according to problem 3.22 (page 110):
    // e = (y1-y2)x1 - (x1-x2)y1
    // f = (y3-y4)x3 - (x3-x4)y3
    
    
    double e = a * x1 - b * y1;
    double f = c * x3 - d * y3;

    LinearEquation le(a,b,c,d,e,f);

    if(le.isSolvable())
    {
        std::cout << "the intersection of the lines is: (" 
                << le.getX() << ", " << le.getY() << ")"
                << std::endl;
    }
    else
    {
        std::cout << "The lines are parallel" << std::endl;
    }
}

