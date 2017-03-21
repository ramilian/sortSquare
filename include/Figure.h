/*
 * Figure.h
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#ifndef INCLUDE_FIGURE_H_
#define INCLUDE_FIGURE_H_

#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include "PointF.h"

using namespace std;
class Figure {
public:
    Figure();
    virtual ~Figure();
    double get_perimeter();
    double get_square();
    static void square_sort(vector<Figure>::iterator begin, vector<Figure>::iterator end);
    inline string get_name()
    {
        return Figure::name;
    }
protected:
    string name;
    double s;
    double p;
    void square();
    void perimeter();
    inline double side_length(PointF p1, PointF p2)
    {
        return sqrt(pow(fabs(p1.x() - p2.x()),2)+pow(fabs(p1.y() - p2.y()),2));
    }
};

#endif /* INCLUDE_FIGURE_H_ */
