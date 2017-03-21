/*
 * PointF.h
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#ifndef INCLUDE_POINTF_H_
#define INCLUDE_POINTF_H_

#include <math.h>

class PointF {
public:
    PointF();
    PointF(double xpos, double ypos);
    virtual ~PointF();
    double x();
    double y();
    double setX(double xpos);
    double setY(double ypos);
    inline PointF &operator+=(const PointF &p);
    inline PointF &operator-=(const PointF &p);
    inline PointF &operator*=(double c);
    inline PointF &operator/=(double c);
    double length(PointF p1, PointF p2);
private:
    double xp;
    double yp;


};

inline PointF &PointF::operator+=(const PointF &p)
{
    xp+=p.xp;
    yp+=p.yp;
    return *this;
}

inline PointF &PointF::operator-=(const PointF &p)
{
    xp-=p.xp; yp-=p.yp; return *this;
}

inline PointF &PointF::operator*=(double c)
{
    xp*=c; yp*=c; return *this;
}

#endif /* INCLUDE_POINTF_H_ */
