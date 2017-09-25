#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;
Point::Point()
{
    this->x = 0;
    this->y = 0;
}
Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}
void Point::setX(float _x)
{
    x = _x;
}
void Point::setY(float _y)
{
    y = _y;
}
void Point::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}
float Point::getX(void)
{
    return x;
}
float Point::getY(void)
{
    return y;
}
float Point::norma()
{
    return (sqrt(x*x+y*y));
}
void Point::imprime(void)
{
    std::cout<< "(" << x << ", " << y << ")" << endl;
}

Point Point::add(Point p1)
{
    Point res;
    res.x = x + p1.x;
    res.y = y + p1.y;
    return res;
}
Point Point::sub(Point p1)
{
    Point res;
    res.x = x - p1.x;
    res.y = y - p1.y;
    return res;
}
Point Point::translada(float a, float b)
{
    Point res;
    res.x = x + a;
    res.y = y + b;
    return res;
}
