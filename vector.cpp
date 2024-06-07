#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector() {
    v_x = 0;
    v_y = 0;
}

Vector::Vector( double x, double y) {
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
    std::cout << "Vector: " <<"["<<Vector::getX()<<", "<<Vector::getY()<<"]"<<std::endl;
}


