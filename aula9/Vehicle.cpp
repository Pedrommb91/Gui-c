//
// Created by guilh on 20/05/2024.
//

#include "Vehicle.h"
Vehicle::Vehicle(){}
Vehicle::Vehicle(int &novoyear,string novocolor,int novonOfWheels) {
    year=novoyear;
    color=novocolor;
    nOfWheels=novonOfWheels;
}



int Vehicle::getyear() {
    return year;
}

void Vehicle::setyear(int &novoyear)const {
    novoyear=year;
}


string Vehicle::getcolor() {
    return color;
}
/*void setcolor(string novocolor)const {
color=novocolor;
}*/

int Vehicle::getnOfWheels() {
    return nOfWheels;
}