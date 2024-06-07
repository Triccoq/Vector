#include <iostream>
#include "vector.h"
using namespace std;

void menu(void) {
    printf("\n");
    printf("0 - Exit\n");
    printf("1 - Set vector\n");
    printf("2 - Print vector\n");
    printf("3 - X coordinate of the end of the vector\n");
    printf("4 - Y coordinate of the end of the vector\n");
    printf("Select an option:\n");
}

int main() {
double x;
double y;
int option=0;
do {
    menu();
    cin>>option;
    switch (option) {
        case 0:
            break;
        case 1:
            cout<<"Write X coordinate: ";
            cin>>x;
            cout<<"Write Y coordinate: ";
            cin>>y;
            Vector::setXY(x, y);
            break;
        case 2:
            Vector::show();
            break;
        case 3:
            cout<<Vector::getX()<<" is X coordinate"<<endl;
            break;
        case 4:
            cout<<Vector::getY()<<" is Y coordinate"<<endl;
            break;
    }



}while (option != 0);


return 0;

}
