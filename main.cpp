#include <iostream>
#include "Car.h"
#include "CarList.h"

using namespace std;
int main() {
    Car car1;

    cout << car1.getCarId() << endl;

    Car car2;
    cout << car2.getCarId() << endl;

    Car car3;
    cout << car3.getCarId() << endl;

    cout << car1.getCarId() << endl;

     CarList carlist;
     carlist.add(car1);
     cout << carlist.getCarlist().size() << endl;
    carlist.add(car2);
    cout << carlist.getCarlist().size() << endl;
    carlist.add(car3);
    cout << carlist.getCarlist().size() << endl;
    carlist.delCar(car1);
    cout << carlist.getCarlist().size() << endl;
    Car car4 = carlist.getCarlist().at(0);
    if (car4 == car2) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
//    if (car2 == carlist.getCarlist().at(0)) {
//        cout << "True" << endl;
//    }
//    if (car1 == car1) {
//        cout << "True" << endl;
//    }
//    else {
//        cout << "False" << endl;
//    }



    return 0;
}
