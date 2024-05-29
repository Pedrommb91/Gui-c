//
// Created by guilh on 29/05/2024.
//

#ifndef GUITARRA_H
#define GUITARRA_H

#include <iostream>

#include "Instrumento.h"
using namespace std;

class Guitarra:public Instrumento {
private:
    int nstrings;
public:
     Guitarra(const string &marca, int n_strings);
    string getInfo()override;
};



#endif //GUITARRA_H
