//
// Created by guilh on 20/05/2024.
//

#include "Vehicle.h"


Vehicle::Vehicle() {}

int Vehicle::getyear() const {
    return year;
}

void Vehicle::setyear(int year) {
    this->year = year;
}


string Vehicle::getcolor() const {
    return color;
}

void Vehicle::setcolor(string &color) {
    this->color = color;
}


int Vehicle::getnOfWheels() const {
    return nOfWheels;
}

void Vehicle::setnOfWheels(int &nOfWheels) {
    this->nOfWheels = nOfWheels;
}
