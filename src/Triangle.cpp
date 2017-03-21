/*
 * Triangle.cpp
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#include <math.h>
#include <iostream>
#include "Triangle.h"
#include "PointF.h"
#include "learn.h"

using namespace std;
Triangle::Triangle(PointF p1, PointF p2, PointF p3)
{
    name = "Triangle";
    tri_side1 = side_length(p1,p2);
    tri_side2 = side_length(p2,p3);
    tri_side3 = side_length(p3,p1);
    s = square(tri_side1,tri_side2,tri_side3);
    p = perimeter(tri_side1,tri_side2,tri_side3);
}

Triangle::~Triangle()
{
}

double Triangle::perimeter(double side1, double side2, double side3)
{
    return side1+side2+side3;
}

double Triangle::square(double side1, double side2, double side3)
{
    double height = 0.0, base = 0.0, cos_a = 0.0;
    base = side1;
    cos_a = -(side3*side3 - side1*side1 - side2*side2)/(2*side1*side2);
    height = sin(acos(cos_a))*side2;
    return 0.5*height*base;
}

double Triangle::get_perimeter()
{
    return p;
}

double Triangle::get_square()
{
    return s;
}
