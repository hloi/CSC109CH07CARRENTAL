//
// Created by hloi on 2/8/2023.
//

#ifndef CSC109CH07CARRENTAL_CAR_H
#define CSC109CH07CARRENTAL_CAR_H

#include <string>

using std::string;

class Car {
public:
    Car();

   const string getMake() const;

    void setMake(const string &make);

    const string getModel() const;

    void setModel(const string &model);

    const string getColor() const;

    void setColor(const string &color);

    double getCost() const;

    void setCost(double cost);

    int getCarId() const;

    void setCarId(int carId);

    bool operator==(Car &other);

private:
    double Cost;
    static int id;
    int carId;
    string make;
    string model;
    string color;

};


#endif //CSC109CH07CARRENTAL_CAR_H
