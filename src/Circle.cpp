/*
 * Circle.cpp
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#include "Circle.h"
#include "math.h"

Circle::Circle(PointF p1, PointF p2)
{
    name = "Circle";
    r = radius(p1,p2);
    p = perimeter(r);
    s = square(r);
}

Circle::~Circle()
{
}

double Circle::perimeter(double radius)
{
    return 2*M_PI*radius;
}

double Circle::square(double radius)
{
    return M_PI*radius*radius/2;
}

double Circle::get_perimeter()
{
    return p;
}
double Circle::get_square()
{
    return s;
}
double Circle::radius(PointF p1, PointF p2)
{
    return side_length(p1,p2);
}
