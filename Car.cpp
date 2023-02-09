//
// Created by hloi on 2/8/2023.
//

#include "Car.h"

int Car::id = 100;  // assign static variable to 100

const string Car::getMake() const {
    return make;
}

void Car::setMake(const string &make) {
    Car::make = make;
}

const string Car::getModel() const {
    return model;
}

void Car::setModel(const string &model) {
    Car::model = model;
}

const string Car::getColor() const {
    return color;
}

void Car::setColor(const string &color) {
    Car::color = color;
}

double Car::getCost() const {
    return Cost;
}

void Car::setCost(double cost) {
    Cost = cost;
}

Car::Car() {
    carId = id;
    id++;

}

int Car::getCarId() const {
    return carId;
}

void Car::setCarId(int carId) {
    this->carId = carId;
}

bool Car::operator==(Car &other) {
    return this->carId == other.carId &&
    this->color == other.color &&
    this->make == other.make &&
    this->model == other.model;

}
