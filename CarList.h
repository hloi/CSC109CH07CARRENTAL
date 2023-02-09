//
// Created by hloi on 2/8/2023.
//

#ifndef CSC109CH07CARRENTAL_CARLIST_H
#define CSC109CH07CARRENTAL_CARLIST_H
#include <vector>
#include "Car.h"

using std::vector;

class CarList {

public:
// add
    void add(Car car1);
    // delete
    void delCar(Car car1);
    // print
    void print();

    const vector<Car> getCarlist() const;

private:
    vector<Car> carlist;

};


#endif //CSC109CH07CARRENTAL_CARLIST_H
