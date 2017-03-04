// testLinearEquation.cpp - test the LinearEquation class to solve systems of linear
// equations.
//  compile with: g++ testLinearEquation.cpp -o test
//  test values:  9.0 4.0 3.0 -5.0 -6.0 -21.0
//  another test: 1.0 2.0 2.0 4.0 4.0 5.0

#include <iostream>
#include "LinearEquation.h"


int main()
{
    double a, b, c, d, e, f=0;
    std::cout << "Enter the 6 variables of the linear system.... ";
    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << std::endl;

    std::cout << "You entered the folowing values" << std::endl;
    std::cout << "a = " << a 
            << ", b = " << b
            << ", c = " << c
            << ", d = " << d
            << ", e = " << e
            << ", f = " << f 
            << std::endl;

    std::cout << "the system is:" << std::endl;
    std::cout << "\t" << a << "x + " << b << "y = " << e << std::endl;
    std::cout << "\t" << c << "x + " << d << "y = " << f << std::endl;
    std::cout << std::endl;

    // create the linear system
    LinearEquation le(a,b,c,d,e,f);

    // is it solvable?
    if (le.isSolvable())
    {
        std::cout << "x = " << le.getX() << std::endl;
        std::cout << "y = " << le.getY() << std::endl;
    }
    else
    {
        std::cout << "cannot solve the system";
    }
}

