//
// Created by guilh on 20/05/2024.
//

#include "Bicycle.h"
Bicycle::Bicycle(int nyear, string ncolor, string bicycleType){
  year=setyear(nyear);
  color=setcolor(ncolor);
  this->bicycleType=bicycleType;
}

string Bicycle::getbicycleType() const{
return bicycleType;
}
void Bicycle::setbicycleType(const string bicycleType) {
  this->bicycleType=bicycleType;
}

