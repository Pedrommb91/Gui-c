//
// Created by guilh on 20/05/2024.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {
private:
    int year;
    string color;
    int nOfWheels;

public:

    Vehicle();

    ~Vehicle() = default;

   // Vehicle(int &novoyear, string novocolor, int novonOfWheels);

    int getyear()const;
    void setyear(int year);

    string getcolor()const;
    void setcolor(string &color);

    int getnOfWheels()const;
    void setnOfWheels(int &nOfWheels);
};


#endif //VEHICLE_H
