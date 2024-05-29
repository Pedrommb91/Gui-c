//
// Created by guilh on 29/05/2024.
//

#include "Piano.h"
Piano::Piano(const string &marca, int n_keys) {
    Instrumento(marca);
    nKeys(n_keys);
}

 string Piano::getInfo() {
   return Piano(Instrumento(marca),nKeys);
}