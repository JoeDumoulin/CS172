// Point.h  2D point class
//
#ifndef POINT_H_
#define POINT_H_

#include <cmath>

class Point {
    private:
        // two properties: one for each coordinate direction.
        double _x;
        double _y;
    public:
        // default Constructor
        Point()         
        {
            _x = 0.0;
            _y = 0.0;
        } 

        // an alternate constructor for setting points
        Point(double x, double y) 
        {
            _x = x;
            _y = y;
        }

        // Accessors
        double getX()
        {
            return _x;
        }

        double getY()
        {
            return _y;
        }

        // distance function
        double distance(Point p)
        {
            return sqrt(pow(getX()-p.getX(), 2) + pow(getY()-p.getY(), 2));
        }
    
        static double distance(Point p1, Point p2)
        {
            return sqrt(pow(p1.getX()-p2.getX(), 2) + pow(p1.getY()-p2.getY(), 2));
        }

};

#endif // POINT_H_

