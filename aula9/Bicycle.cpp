//
// Created by guilh on 20/05/2024.
//

#include "Bicycle.h"
string Bicycle::getbicycleType() {
return bicycleType;
}

Bicycle::Bicycle(int year, string color, string bicycleType) {
  year=getyear();
  color=getcolor();
  bicycleType=getbicycleType();
}