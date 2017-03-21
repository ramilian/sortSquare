/*
 * Square.h
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#ifndef INCLUDE_QUATROGON_H_
#define INCLUDE_QUATROGON_H_

#include <PointF.h>
#include <Figure.h>
#include "learn.h"

class Quatrogon: public Figure {
public:
    Quatrogon(PointF p1 = PointF(0.0,0.0), PointF p2 = PointF(0.0,0.0), PointF p3 = PointF(0.0,0.0));
    virtual ~Quatrogon();
    double get_perimeter();
    double get_square();
private:
    double squ_side1, squ_side2;
    double square(double side1, double side2, double alpha);
    double perimeter(double side1, double side2);
    double inclinSquare(PointF p1, PointF p2, PointF p3);
};

#endif /* INCLUDE_QUATROGON_H_ */
