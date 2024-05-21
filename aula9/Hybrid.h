//
// Created by guilh on 21/05/2024.
//

#ifndef HYBRID_H
#define HYBRID_H
#include "InternalCombustion.h"
#include "Vehicle.h"


class Hybrid:public InternalCombustion{
public:
    int getCO2emessions();

};



#endif //HYBRID_H
