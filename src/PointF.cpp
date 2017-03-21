/*
 * PointF.cpp
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#include <PointF.h>

PointF::PointF()  : xp(0), yp(0) { }

PointF::PointF(double xpos, double ypos) : xp(xpos), yp(ypos) { }


PointF::~PointF() {
}

double PointF::x()
{
    return xp;
}

double PointF::y()
{
    return yp;
}
