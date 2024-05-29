//
// Created by guilh on 29/05/2024.
//

#include "Loja.h"

 void Loja::adicionaInstrumento(Instrumento & i) {
   this-> i.push_back(i);
}

 void Loja::imprime() {
     for(int i=0;i<this->i.size();i++) {
         cout<<this->i[i].getInfo()<<endl;
     }
}