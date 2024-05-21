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
int getcylinderVolume();
int getCO2emessions();
};



#endif //INTERNALCOMBUSTION_H
