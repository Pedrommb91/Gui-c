//
// Created by guilh on 29/05/2024.
//

#ifndef PIANO_H
#define PIANO_H
#include "Instrumento.h"


class Piano:public Instrumento{
private:
    int nKeys;
public:
    Piano(const string &marca, int n_keys);
   string getInfo()override;


};



#endif //PIANO_H
