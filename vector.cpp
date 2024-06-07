#include <iostream>
#include "vector.h"
#include <cmath>
using namespace std;

Vector::Vector() {
    v_x = 0;
    v_y = 0;
}

Vector::Vector(double x, double y) {
    v_x = x;
    v_y = y;
}

void Vector::setXY(double x, double y) {
    v_x = x;
    v_y = y;
}

double Vector::getX() {
    return v_x;
}

double Vector::getY() {
    return v_y;
}

void Vector::show() {
    cout << "Vector: [" << v_x << ", " << v_y << "]" << endl;
}

double Vector::length() {
    return sqrt(v_x*v_x+v_y*v_y);
}

double Vector::angle() {
    double angle_rad=atan2(v_y,v_x);
    double angle_deg = (angle_rad*180) / M_PI;
    return angle_deg;
}

Vector Vector::fromLengthAndAngle(double length, double angle){
    double angleRAD = angle * M_PI / 180;
    double v_laX= length * cos(angleRAD);
    double v_laY= length * sin(angleRAD);
    return Vector(v_laX, v_laY);
}
Vector Vector::fromXYCoordinates(double x, double y) {
    return Vector(x, y);
}