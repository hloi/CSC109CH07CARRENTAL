//
// Created by hloi on 2/8/2023.
//

#include "CarList.h"

const vector<Car> CarList::getCarlist() const {
    return carlist;
}

void CarList::add(Car car1) {
    for (size_t i=0; i<carlist.size(); i++) {
        if (car1 == carlist.at(i)) {
            return;
        }
    }
    carlist.push_back(car1);
}

void CarList::delCar(Car car1) {
    for (size_t i=0; i<carlist.size(); i++) {
        if (car1 == carlist.at(i)) {
            carlist.erase(carlist.begin()+i);
            return;
        }
    }
}
