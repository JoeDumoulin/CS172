// Rectangle.cpp - the implementation file for the Rectangle2D class.
//

#include "Rectangle2D.h"

// constructors
Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 0;
    height = 0;
}

Rectangle2D::Rectangle2D(double X, double Y, double Width, double Height)
{
    x = X;
    y = Y;
    width = Width;
    height = Height;
}

double Rectangle2D::getX() const
{
    return x;
}

void Rectangle2D::setX(double X)
{
    x = X;
}

double Rectangle2D::getY() const
{
    return y;
}

void Rectangle2D::setY(double Y)
{
    y = Y;
}

double Rectangle2D::getWidth() const
{
    return width;
}

void Rectangle2D::setWidth(double Width)
{
    width = Width;
}

double Rectangle2D::getHeight() const
{
    return height;
}

void Rectangle2D::setHeight(double Height)
{
    height = Height;
}

double Rectangle2D::getArea() const
{
    return width*height;
}

double Rectangle2D::getPerimeter() const
{
    return 2 * width + 2 * height;
}

// check if a point is inside a rectangle
bool Rectangle2D::contains(double X, double Y) const
{
    double leftX =    x - width/2.0;
    double topY =     y + height/2.0;
    double rightX =   x + width/2.0;
    double bottomY =  y - height/2.0;

   
    if (X < leftX   ||  // is the point left of the left edge?
        X > rightX  ||  // or right of right edge?
        Y < bottomY ||  // or below the bottom edge?
        Y > topY)       // or above the top edge?
        return false;
    else
        return true;
}

// check if a rectangle is inside this rectangle 
bool Rectangle2D::contains(const Rectangle2D &rect) const
{
    // if all verteces of rect are inside of this rect
    double leftX =    rect.getX() - rect.getWidth()/2.0;
    double topY =     rect.getY() + rect.getHeight()/2.0;
    double rightX =   rect.getX() + rect.getWidth()/2.0;
    double bottomY =  rect.getY() - rect.getHeight()/2.0;

    if (contains(leftX, topY)    && // top left vertex
        contains(leftX, bottomY) && // bottom left vertex
        contains(rightX, topY)   && // top right vertex
        contains(rightX, bottomY))  // bottom right vertex
        return true;
    else
        return false;
}

// check if rectangles overlap
bool Rectangle2D::overlaps(const Rectangle2D &rect) const
{
    // if all verteces of rect are inside of this rect
    double leftX =    rect.getX() - rect.getWidth()/2.0;
    double topY =     rect.getY() + rect.getHeight()/2.0;
    double rightX =   rect.getX() + rect.getWidth()/2.0;
    double bottomY =  rect.getY() - rect.getHeight()/2.0;

    // rect overlaps if at least one point is inside this object.
    if (contains(leftX, topY)    || // top left vertex
        contains(leftX, bottomY) || // bottom left vertex
        contains(rightX, topY)   || // top right vertex
        contains(rightX, bottomY))  // bottom right vertex
        return true;
    else
        return false;

}




