// LinearEquation.h - define a class for managing a system of 2 equations:
//  ax + by = e
//  cx + dy = f
//
//  we can derive x and y as 
//
//  x = (ed - bf)/(ad - bc), y = (af - ec)/(ad - bc)
//
#ifndef LINEAREQUATION_H_
#define LINEAREQUATION_H_

class LinearEquation {
    private:
        double _a;
        double _b;
        double _c;
        double _d;
        double _e;
        double _f;
    public:
        // constructor
        LinearEquation(double a, double b, double c, double d, double e, double f)
        {
            _a = a;
            _b = b;
            _c = c;
            _d = d;
            _e = e;
            _f = f;
        }

        // accessors
        double getA()
        {
            return _a;
        }

        double getB()
        {
            return _b;
        }

        double getC()
        {
            return _c;
        }

        double getD()
        {
            return _d;
        }

        double getE()
        {
            return _e;
        }

        double getF()
        {
            return _f;
        }

        // is the system solvable?
        bool isSolvable()
        {
            return getA()*getD() - getB()*getC() != 0;
        }

        // assuming the equations are solvable, solve them.
        // x = (ed - bf)/(ad - bc)
        double getX()
        {
            return (getE()*getD() - getB()*getF())/(getA()*getD() - getB()*getC());
        }

        // y = (af - ec)/(ad - bc)
        double getY()
        {
            return (getA()*getF() - getE()*getC())/(getA()*getD() - getB()*getC());
        }
};

#endif  // LINEAREQUATION_H_
