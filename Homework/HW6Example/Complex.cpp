// Complex.cpp - implementation of the Complex number class.
#include "Complex.h"

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

Complex::Complex()
{
    _real = 0;
    _imaginary = 0;
}

Complex::Complex(double a)
{
    _real = a;
    _imaginary = 0;
}

Complex::Complex(double a, double b)
{
    _real = a;
    _imaginary = b;
}

double Complex::getReal() const
{
    return _real;
}

double Complex::getImaginary() const
{
    return _imaginary;
}

Complex Complex::add(const Complex& c) const
{
    return Complex(getReal() + c.getReal(),
            getImaginary() + c.getImaginary());
}

Complex Complex::multiply(const Complex& c) const
{
    return Complex(
            getReal()*c.getReal() - getImaginary()*c.getImaginary(),
            c.getReal()*getImaginary() + getReal()*c.getImaginary()
            );
}

Complex Complex::subtract(const Complex& c) const
{
    return add(c.multiply(-1));
}

Complex Complex::divide(const Complex& c) const
{
    double denom = c.getReal()*c.getReal() + 
        c.getImaginary()*c.getImaginary();

    return Complex(
        (getReal()*c.getReal() + getImaginary()*c.getImaginary()) / denom,
        (c.getReal()*getImaginary() - getReal()*c.getImaginary()) / denom
        );
}

double Complex::abs() const
{
    return sqrt(_real * _real + _imaginary * _imaginary);
}

string Complex::toString() const
{
    stringstream ss;
    ss << _real;
    if (_imaginary != 0.0)
        ss << " + " << _imaginary << "i";
    return ss.str();
}

Complex& Complex::operator+=(const Complex& c)
{
    *this = add(c);
    return *this;
}

Complex& Complex::operator-=(const Complex& c)
{
    *this = subtract(c);
    return *this;
}

Complex& Complex::operator*=(const Complex& c)
{
    *this = multiply(c);
    return *this;
}
Complex& Complex::operator/=(const Complex& c)
{
    *this = divide(c);
    return *this;
}











