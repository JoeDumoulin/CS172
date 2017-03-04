// testInteger.cpp
//
#include <iostream>
#include <string>
#include "Integer.h"

using namespace std;

int main()
{
    Integer J(255);
    Integer K(257);
    Integer L(2570);
    
    // test member functions
    if (J.getValue() == 255)
    {
        cout << "getValue() test passed" << endl;
    }
    
    if (!J.isEven() && L.isEven())
    {
        cout << "isEven() test passed" << endl;
    }
    
    if (J.isOdd() && K.isOdd())
    {
        cout << "isOdd() test passed." << endl;
    }
    
    if (!J.isPrime() && K.isPrime())
    {
        cout << "isPrime() test passed" << endl;
    }
    
    cout << "test static integer functions" << endl;
    if (Integer::isEven(30) && !Integer::isEven(31))
    {
        cout << "static isEven(int) test passed" << endl;
    }
    
    if (!Integer::isOdd(30) && Integer::isOdd(31))
    {
        cout << "static isOdd(int) test passed" << endl;
    }
    
    if (!Integer::isPrime(16) && Integer::isPrime(17))
    {
        cout << "static isPrime(int) test passed" << endl;
    }
    
    cout << "test static Integer class functions" << endl;
    if (Integer::isEven(L) && !Integer::isEven(J))
    {
        cout << "static isEven(const Integer&) test passed" << endl;
    }
    
    if (!Integer::isOdd(L) && Integer::isOdd(J))
    {
        cout << "static isOdd(const Integer&) test passed" << endl;
    }
    
    if (!Integer::isPrime(J) && Integer::isPrime(K))
    {
        cout << "static isPrime(const Integer&) test passed" << endl;
    }
    
    // equality tests
    if (!J.equals(16) && K.equals(257))
    {
        cout << "equality with int test passes" << endl;
    }
    
    Integer M(J.getValue());
    if (M.equals(J) && !J.equals(K))
    {
        cout << "equality with Integer test passes" << endl;
    }
    
    // parseInt test
    int testMe = Integer::parseInt("12345");
    if (testMe == 12345)
    {
        cout << "static parseInt test passed" << endl;
    }
}








