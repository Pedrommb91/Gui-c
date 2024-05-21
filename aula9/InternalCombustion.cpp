//
// Created by guilh on 20/05/2024.
//

#include "InternalCombustion.h"

int InternalCombustion::getcylinderVolume() {
    return cylinderVolume;
}
int getCO2emessions(int cylinderVolume) {
    return 0.1*cylinderVolume;
}