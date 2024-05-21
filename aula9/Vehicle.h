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

    Vehicle(int &novoyear, string novocolor, int novonOfWheels);

    int getyear();
    void setyear(int &novoyear)const;

    string getcolor();
    void setcolor(string novocolor)const;

    int getnOfWheels();
    void setnOfWheels(int novonOfWheels)const;
};


#endif //VEHICLE_H
