// rectangleTest.cpp - test the rectangle class
// compile with: g++ rectangleTest.cpp Rectangle2D.cpp -std=c++11 -o test
//
#include <iostream>

#include "Rectangle2D.h"

using namespace std;

int main()
{
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);

    cout << "r1.contains(3, 3) = " << r1.contains(3, 3) << endl;
    cout << "r1.contains(r2) = " << r1.contains(r2) << endl;
    cout << "r1.overlaps(r3) = " << r1.overlaps(r3) << endl;
}
