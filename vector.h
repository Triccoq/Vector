#pragma once
#include <string>
using namespace std;

class Vector {
private:
    static double v_x;
    static double v_y;

public:
    Vector();
    Vector(double x = 0, double y = 0);
    static void setXY(double x, double y);
    static double getX();
    static double getY();
    static void show();
};