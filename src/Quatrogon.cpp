/*
 * Square.cpp
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#include <math.h>
#include <Quatrogon.h>
#include <iostream>
#include "PointF.h"
#include "learn.h"

using namespace std;
Quatrogon::Quatrogon(PointF p1, PointF p2, PointF p3)
{
    squ_side1 = side_length(p1,p2);
    squ_side2 = side_length(p2,p3);
    double alpha = inclinSquare(p1,p2,p3);
    if (fabs(alpha - M_PI/2) <= 0.0000001f)
    {
        if (squ_side1==squ_side2)
        {
            name = "Square";
        }
        else
            name = "Rectangle";
    }
    else
    {
        name = "Parallelogram";
    }
    s = square(squ_side1,squ_side2,alpha);
    p = perimeter(squ_side1,squ_side2);
}

Quatrogon::~Quatrogon()
{
}

double Quatrogon::inclinSquare(PointF p1, PointF p2, PointF p3)
{
    //p2 must 90 degree
    double side1, side2, side3, cos_a;
    side1 = side_length(p1,p2);
    side2 = side_length(p2,p3);
    side3 = side_length(p3,p1);
    cos_a = -(side3*side3 - side1*side1 - side2*side2)/(2*side1*side2);
    return acos(cos_a);
}
double Quatrogon::perimeter(double side1, double side2)
{
    return 2*side1+2*side2;
}

double Quatrogon::square(double side1, double side2, double alpha)
{
    double height = side2*sin(alpha);
    return side1*height;
}

double Quatrogon::get_perimeter()
{
    return p;
}

double Quatrogon::get_square()
{
    return s;
}
