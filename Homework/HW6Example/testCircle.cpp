// testCircle.cpp - test the circle class
// compile with g++ testCircle.cpp Circle.cpp -o test
//
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    Circle c1;
    Circle c2(5);
    Circle c3;
    Circle c4(5000);
    
    // test ==
    if (c1 == c3)
        cout << "c1 == c2" << endl;
    else 
        cout << "Oooops. == doesn't work" << endl;

    if (c1 == c2)
        cout << "Oooops. == doesn't work" << endl;
    else 
        cout << "c1 != c2" << endl;

    if (c1 != c2)
        cout << "c1 != c2" << endl;
    else 
        cout << "Oooops. != doesn't work" << endl;

    // test < and <=
    if (c1 <= c3)
        cout << "c1 <= c2" << endl;
    else 
        cout << "Oooops. <= doesn't work" << endl;

    if (c1 <= c2)
        cout << "c1 <= c2" << endl;
    else 
        cout << "Oooops. <= doesn't work" << endl;

    if (c2 <= c3)
        cout << "Oooops. <= doesn't work" << endl;
    else 
        cout << "c2 > c3" << endl;

    // test > and >=
    if (c1 >= c3)
        cout << "c1 >= c2" << endl;
    else 
        cout << "Oooops. >= doesn't work" << endl;

    if (c4 >= c2)
        cout << "c4 >= c2" << endl;
    else 
        cout << "Oooops. >= doesn't work" << endl;

    if (c4 > c3)
        cout << "c4 > c3" << endl;
    else
        cout << "Oooops. >= doesn't work" << endl;
    

    return 0;
}
