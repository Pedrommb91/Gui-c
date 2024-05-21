//
// Created by guilh on 20/05/2024.
//

#ifndef BICYCLE_H
#define BICYCLE_H
#include<iostream>
using namespace std;
#include"Vehicle.h"

class Bicycle: public Vehicle {
private:
    string bicycleType;
public:
    string getbicycleType();
    Bicycle(int year, string color, string bicycleType);
};



#endif //BICYCLE_H
