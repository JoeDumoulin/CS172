// Circle.h - declare the circle class prototype
#ifndef CIRCLE_H_
#define CIRCLE_H_

static const double PI = 3.1415926535;

class Circle
{
    private:
        double _radius;
        static int numberOfObjects;

    public:
        Circle();
        Circle(double radius);
        double getArea() const;
        double getRadius() const;
        void setRadius(double value);
        static int getNumberOfObjects();
};

bool operator==(const Circle& c1, const Circle& c2);
bool operator<(const Circle& c1, const Circle& c2);
bool operator<=(const Circle& c1, const Circle& c2);
bool operator!=(const Circle& c1, const Circle& c2);
bool operator>(const Circle& c1, const Circle& c2);
bool operator>=(const Circle& c1, const Circle& c2);

#endif  // CIRCLE_H_
