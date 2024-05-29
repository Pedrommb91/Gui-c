//
// Created by guilh on 29/05/2024.
//

#ifndef LOJA_H
#define LOJA_H

#include <vector>

#include "Instrumento.h"


using namespace std;
class Loja {
private:
    vector<Instrumento> i;

public:
    Loja()=default;
    void adicionaInstrumento(Instrumento& i);
    void imprime();
};




#endif //LOJA_H
