#pragma once
#include <string>
using namespace std;

class Vector
{
private:
    static double v_x;
    static double v_y;
public:
    Vector();
    Vector(double x = 0, double y = 0);
    void setXY(double x, double y);
    double getX();
    double getY();
    void show();
};