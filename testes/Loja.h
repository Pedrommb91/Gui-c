//
// Created by guilh on 29/05/2024.
//

#ifndef LOJA_H
#define LOJA_H
#include <iostream>
#include<vector>

#include "Instrumento.h"
#include "Piano.h"

using namespace std;
class Loja:public Piano {
private:
    vector<Instrumento> i;
public:
    void adicionaInstrumento(Instrumento &i);
    void imprime();
};



#endif //LOJA_H
