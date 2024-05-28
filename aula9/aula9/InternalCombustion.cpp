//
// Created by guilh on 20/05/2024.
//

#include "InternalCombustion.h"

InternalCombustion::InternalCombustion(){}

int InternalCombustion::getcylinderVolume() {
    return cylinderVolume;
}

int InternalCombustion::getCO2emessions1(int &cylinderVolume) {
    return 0.1*cylinderVolume;
}

void InternalCombustion::setcylinderVolume(int cylinderVolume) {
    this->cylinderVolume=cylinderVolume;
}