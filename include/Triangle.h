/*
 * Triangle.h
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#ifndef INCLUDE_TRIANGLE_H_
#define INCLUDE_TRIANGLE_H_

#include <PointF.h>
#include <Figure.h>
#include "learn.h"

class Triangle: public Figure {
public:
    Triangle(PointF p1 = PointF(0.0,0.0), PointF p2 = PointF(0.0,0.0), PointF p3 = PointF(0.0,0.0));
    virtual ~Triangle();
    double get_perimeter();
    double get_square();
private:
    double tri_side1, tri_side2, tri_side3;
    double square(double side1, double side2, double side3);
    double perimeter(double side1, double side2, double side3);

};

#endif /* INCLUDE_TRIANGLE_H_ */
