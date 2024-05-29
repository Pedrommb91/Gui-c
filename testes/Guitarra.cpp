//
// Created by guilh on 29/05/2024.
//

#include "Guitarra.h"
Guitarra::Guitarra(const string &marca, int n_strings):Instrumento(marca), nstrings(n_strings){}
string Guitarra::getInfo() {
    return "Guitarra: marca " + this->getmarca()+ " ("+to_string(this->nstrings)+" cordas";
}