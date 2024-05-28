//
// Created by guilh on 20/05/2024.
//

#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "Vehicle.h"



class Electric:public Vehicle {
private:
    string  bacteryLife;
public:
    Electric();
  string getbacteryLife();
void setbacteryLife(string bacteryLife);

};



#endif //ELECTRIC_H
