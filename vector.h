#pragma once
#include <string>
using namespace std;

class Vector {
private:
    double v_x;
    double v_y;
    Vector();
    Vector(double x = 0, double y = 0);

public:
    void setXY(double x, double y);
    double getX();
    double getY();
    void show();
    double length();
    double angle();
    static Vector fromLengthAndAngle(double length, double angle);
    static Vector fromXYCoordinates(double x, double y);
};