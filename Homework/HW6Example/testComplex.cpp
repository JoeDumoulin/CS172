// testComplex.cpp - test the complex number class
// compile with g++ testComplex.cpp Complex.cpp -o test
//
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    // Test printing complex numbers
    Complex c1(2,5);
    Complex c2;
    
    cout << c1.toString() << endl;
    cout << c2.toString() << endl;
    
    Complex c3(4,7);
    
    cout << c1.toString() << " + " << c3.toString() << " = " << c1.add(c3).toString() << endl;
    cout << c1.toString() << " - " << c3.toString() << " = " << c1.subtract(c3).toString() << endl;
    cout << c1.toString() << " * " << c3.toString() << " = " << c1.multiply(c3).toString() << endl;
    cout << c1.toString() << " / " << c3.toString() << " = " << c1.divide(c3).toString() << endl;
    
    cout << c1.toString() << " += " << c3.toString() << " = " << (c1 += c3).toString() << endl;
    cout << c1.toString() << " -= " << c3.toString() << " = " << (c1 -= c3).toString() << endl;
    cout << c1.toString() << " *= " << c3.toString() << " = " << (c1 *= c3).toString() << endl;
    cout << c1.toString() << " /= " << c3.toString() << " = " << (c1 /= c3).toString() << endl;
    
    
    return 0;
}

