#include <iostream>
#include "vector.h"
using namespace std;

void menu(void) {
    cout<<"0 - Exit"<<endl;
    cout<<"1 - Set vector"<<endl;
    cout<<"2 - Print vector"<<endl;
    cout<<"3 - X coordinate of the end of the vector"<<endl;
    cout<<"4 - Y coordinate of the end of the vector"<<endl;
    cout<<"5 - Lenght of the vector"<<endl;
    cout<<"6 - Angle the vector"<<endl;
    cout<<"7 - Create new vector using angle and length"<<endl;
    cout<<"Select an option:"<<endl;
}

int main() {
  /*  double x;
    double y;
    int option = 0;

    do {
        menu();
        cin >> option;
        switch (option) {
            case 0:
                break;
            case 1:
                cout << "Write X coordinate: "<<endl;
                cin >> x;
                cout << "Write Y coordinate: "<<endl;
                cin >> y;
                Vector::setXY(x, y);
                break;
            case 2:
                Vector::show();
                break;
            case 3:
                cout << "X coordinate: " << Vector::getX() << endl;
                break;
            case 4:
                cout << "Y coordinate: " << Vector::getY() << endl;
                break;
            case 5:
                cout << "Lenght of vector: " << Vector::length() << endl;
                break;
            case 6:
                cout << "Angle: " << Vector::angle() <<" degrees."<< endl;
                break;
            case 7:
                double Len;
                double Ang;
                cout<<"Put the length of the vector"<<endl;
                cin>>Len;
                cout<<"Put the Angle of the vector in deegres"<<endl;
                cin>>Ang;
                if(Len>0) {
                    Vector::fromLengthAndAngle(Len, Ang);
                }
                else
                {
                    cout<<"Wrong data"<<endl;
                }
                break;
            case 8:
                Vector:
        }
    } while (option != 0);
    */
  Vector v1 = Vector::fromXYCoordinates(1, 2);
  Vector v2 = Vector::fromLengthAndAngle(5, 0);
  v1.show();
  v2.show();



    return 0;
}

