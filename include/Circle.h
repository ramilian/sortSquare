/*
 * Circle.h
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

#include "Figure.h"
#include "PointF.h"

class Circle : public Figure {
public:
    Circle(PointF p1, PointF p2);
    virtual ~Circle();
    double get_perimeter();
    double get_square();
private:
    double r;
    double square(double radius);
    double perimeter(double radius);
    double radius(PointF p1, PointF p2);
};

#endif /* INCLUDE_CIRCLE_H_ */
