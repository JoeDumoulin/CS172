// Complex.h - definition of the comlex number class
#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <string>

class Complex
{
    private:
        double _real;
        double _imaginary;
    public:
        Complex();
        Complex(double a);
        Complex(double a, double b);

        double getReal() const;
        double getImaginary() const;
        
        Complex add(const Complex& c) const;
        Complex subtract(const Complex& c) const;
        Complex multiply(const Complex& c) const;
        Complex divide(const Complex& c) const;

        double abs() const;

        std::string toString() const;
    
        Complex& operator+=(const Complex& c);
        Complex& operator-=(const Complex& c);
        Complex& operator*=(const Complex& c);
        Complex& operator/=(const Complex& c);


};

#endif // COMPLEX_X_
