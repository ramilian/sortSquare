/*
 * Figure.cpp
 *
 *  Created on: 21.03.2017
 *      Author: roman
 */

#include "Figure.h"
#include <algorithm>
Figure::Figure() {
    s = 0;
    p = 0;
}

Figure::~Figure() {
}

void Figure::square_sort(vector<Figure>::iterator begin, vector<Figure>::iterator end)
{
    vector<Figure>::iterator it1 = begin;
    vector<Figure>::iterator it2;
    for (it1 = begin; it1!=end-1; ++it1)
    {
        it2 = it1+1;
        for (; it2!=end; ++it2)
        {
            if ((*it1).s > (*it2).s)
            {
                iter_swap(it1,it2);
            }
        }
    }
}

double Figure::get_perimeter()
{
    return p;
}

double Figure::get_square()
{
    return s;
}
