// Rectangle2D.h - prototypes fpr Rectangle2D class
//
#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

class Rectangle2D
{
    private:
        double x; // center x-coordinate
        double y; // center y-coordinate

        double width;
        double height;

    public:
        Rectangle2D();
        Rectangle2D(double X, double Y, double Width, double Height);

        double getX() const;
        void setX(double X);
        double getY() const;
        void setY(double Y);
        double getWidth() const;
        void setWidth(double Width);
        double getHeight() const;
        void setHeight(double Height);

        double getArea() const;
        double getPerimeter() const;
        bool contains(double X, double Y) const;
        bool contains(const Rectangle2D& rect) const;
        bool overlaps(const Rectangle2D& rect) const;
};

#endif //RECTANGLE2D_H_
