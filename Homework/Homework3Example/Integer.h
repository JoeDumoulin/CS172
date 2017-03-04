// Integer.h - A class to manage some properties of integers
//
#ifndef INTEGER_H_
#define INTEGER_H_

#include <string>
#include <sstream>

using namespace std;

class Integer
{
    private:
        int _value;

    public:
        explicit Integer(const int value)
        {
            _value = value;
        }

        int getValue() const
        {
            return _value;
        }
    
        bool isEven() const
        {
            return (_value % 2) == 0;
        }
    
        bool isOdd() const
        {
            return !isEven();
        }
    
        bool isPrime() const
        {
            for (int i = 2; i < _value - 1; i++)
            {
                if (_value % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    
        // static functions taking int
        static bool isEven(int i)
        {
            return i % 2 == 0;
        }
    
        static bool isOdd(int i)
        {
            return !isEven(i);
        }
    
        static bool isPrime(int j)
        {
            for (int i = 2; i < j - 1; i++)
            {
                if (j % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    
        // static functions taking Integer ref
        static bool isEven(const Integer& i)
        {
            return i.isEven();
        }
    
        static bool isOdd(const Integer& i)
        {
            return i.isOdd();
        }
    
        static bool isPrime(const Integer& j)
        {
            return j.isPrime();
        }
    
        bool equals(int i) const
        {
            return i == _value;
        }
    
        bool equals(const Integer& I)
        {
            return I._value == _value;
        }
    
        static int parseInt(string s)
        {
            int theInt;
            stringstream ss(s);
            ss >> theInt;
            return theInt;
        }
    
    
    
};

#endif // INTEGER_H_

