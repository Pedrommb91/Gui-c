//
// Created by guilh on 20/05/2024.
//

#ifndef INTERNALCOMBUSTION_H
#define INTERNALCOMBUSTION_H
#include "Vehicle.h"

using namespace std;
#include<iostream>

class InternalCombustion:public Vehicle {
private:
    int cylinderVolume;
public:
    InternalCombustion();
int getcylinderVolume();
int getCO2emessions1(int &cylinderVolume);
    void setcylinderVolume(int cylinderVolume);
};



#endif //INTERNALCOMBUSTION_H
