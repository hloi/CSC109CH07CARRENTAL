//
// Created by hloi on 2/8/2023.
//

#ifndef CSC109CH07CARRENTAL_NEWCXXTEST_H
#define CSC109CH07CARRENTAL_NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Car.h"
#include "CarList.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testCar1() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Car car1;
        car1.setColor("blue");
        car1.setModel("model3");
        car1.setMake("Tesla");
        car1.setCost(70000);

        TS_ASSERT_EQUALS("blue", car1.getColor());

        // cout << car1.getCarId() << endl;
    }

    void testCar2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Car car2;
        int expect = 101;
        TS_ASSERT_EQUALS(expect, car2.getCarId());
        // cout << car1.getCarId() << endl;
    }

    void testCarList() {
        Car car1;

//        cout << car1.getCarId() << endl;

        Car car2;
//        cout << car2.getCarId() << endl;

        Car car3;
//        cout << car3.getCarId() << endl;

//        cout << car1.getCarId() << endl;

        CarList carlist;
        carlist.add(car1);
//        cout << carlist.getCarlist().size() << endl;
        carlist.add(car2);
//        cout << carlist.getCarlist().size() << endl;
        carlist.add(car3);
        TS_ASSERT_EQUALS(3, carlist.getCarlist().size());
//        cout << carlist.getCarlist().size() << endl;
        carlist.delCar(car1);
        TS_ASSERT_EQUALS(2, carlist.getCarlist().size());
        TS_ASSERT_EQUALS(car2, carlist.getCarlist().at(0));

//        cout << carlist.getCarlist().size() << endl;
    }
};

#endif //CSC109CH07CARRENTAL_NEWCXXTEST_H
