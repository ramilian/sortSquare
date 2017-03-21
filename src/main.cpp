/*
 * main.cpp
 *
 *  Created on: 14.03.2017
 *      Author: roman
 */
#include <Quatrogon.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <stdint.h>
#include <unistd.h>
#include "Circle.h"
#include "PointF.h"
#include "Triangle.h"

using namespace std;

template <typename Type>
void printFigureSquare(vector<Type> &v);

//Сегодня было реально нечем заняться :))
int main(void)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "%%%%%%%%%%==========================================%%%%%%%%%%" << endl;
    cout << "%%%%%%%%%%==== Calculate and sort figure square ====%%%%%%%%%%" << endl;
    cout << "%%%%%%%%%%==========================================%%%%%%%%%%" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl<< endl;
    while (1)
    {
        cout << "Type name of figure (Circle, Triangle, Square) \nor Stop for terminate and sort for sort vector: ";
        string str;
        double x[4] = {0.0},y[4] = {0.0};
        vector<Figure> fig;
        while (cin >> str)
        {
            if (str == "Circle" or str == "circle")
            {
                cout << "Type center point (x y) via whitespace: ";
                cin >> x[0] >> y[0];
                cout << "Type point belongs to the side (x y) via whitespace: ";
                cin >> x[1] >> y[1];
                PointF point1(x[0],y[0]);
                PointF point2(x[1],y[1]);
                Circle crc(point1, point2);
                fig.push_back(crc);
            }
            else if (str == "Triangle" or str == "triangle")
            {
                cout << "Type first point (x y) via whitespace: ";
                cin >> x[0] >> y[0];
                cout << "Type second point (x y) via whitespace: ";
                cin >> x[1] >> y[1];
                cout << "Type last point (x y) via whitespace: ";
                cin >> x[2] >> y[2];
                PointF point1(x[0],y[0]);
                PointF point2(x[1],y[1]);
                PointF point3(x[2],y[2]);
                Triangle tri(point1, point2, point3);
                fig.push_back(tri);
            }
            else if (str == "Square" or str == "square")
            {
                cout << "        0 Point3"<<endl;
                cout << "        |"<<endl;
                cout << "        |"<<endl;
                cout << " 0------0 Point2"<<endl;
                cout << " Point1" << endl;
                cout << "Type Point1 (x y) via whitespace: ";
                cin >> x[0] >> y[0];
                cout << "Type Point2 (x y) via whitespace: ";
                cin >> x[1] >> y[1];
                cout << "Type Point3 (x y) via whitespace: ";
                cin >> x[2] >> y[2];
                PointF point1(x[0],y[0]);
                PointF point2(x[1],y[1]);
                PointF point3(x[2],y[2]);
                Quatrogon qua(point1, point2, point3);
                fig.push_back(qua);
            }
            else if (str == "Stop" or str == "stop" or str == "exit")
            {
                exit(0);
            }
            else if (str == "Sort" or str == "sort")
            {
                break;
            }
            else
            {
                cout << endl;
                cout << "Error. try again: ";
                continue;
            }
            cout << endl;
            cout << "Type name of figure (Circle, Triangle, Square) \nor Stop for terminate and sort for sort vector: ";
        }

        cout << endl << "before sort" << endl;
        printFigureSquare(fig);

        Figure::square_sort(fig.begin(), fig.end());

        cout << "after sort" << endl;
        printFigureSquare(fig);
        cout << endl << "Try again (Y/N)?" << endl;
        cin >> str;
        if (str == "N" || str == "No" || str == "NO" || str == "Н")
            break;
    }
    return 0;
}

template <typename Type>
void printFigureSquare(vector<Type> &v)
{
    if (v.size()>0)
        for (unsigned int i = 0; i < v.size(); ++i)
        {
            cout << "Square of "<< v[i].get_name() << " = ";
            cout << v[i].get_square() << endl;
        }
    cout << endl;
}
