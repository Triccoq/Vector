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
    cout<<"Select an option:"<<endl;
}

int main() {
    double x;
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
                cout << "Lenght of vector: " << Vector::lenght() << endl;
                break;
            case 6:
                cout << "Angle: " << Vector::angle() <<" degrees."<< endl;
                break;
        }
    } while (option != 0);

    return 0;
}