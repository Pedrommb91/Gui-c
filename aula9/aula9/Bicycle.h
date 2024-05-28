//
// Created by guilh on 20/05/2024.
//

#ifndef BICYCLE_H
#define BICYCLE_H
#include<iostream>
using namespace std;
#include"Vehicle.h"

class Bicycle:  public Vehicle{
private:
    string bicycleType;
public:
    Bicycle(int year, string color, string bicycleType);
    string getbicycleType()const;
    void setbicycleType(const string bicycleType);




};



#endif //BICYCLE_H
