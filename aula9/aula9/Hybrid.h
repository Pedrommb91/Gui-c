//
// Created by guilh on 21/05/2024.
//

#ifndef HYBRID_H
#define HYBRID_H
#include "InternalCombustion.h"
#include "Vehicle.h"
#include"Electric.h"
#include"InternalCombustion.h"


class Hybrid:public InternalCombustion, public Electric{
public:
    int getCO2emessions(int &cylinderVolume);

};



#endif //HYBRID_H
