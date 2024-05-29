//
// Created by guilh on 29/05/2024.
//

#include<iostream>
#include "Guitarra.h"
#include "Instrumento.h"
#include "Loja.h"
#include"Piano.h"
using namespace std;




int main() {
    Loja j;
    Guitarra g("fender",6);
    Piano p("yama",66);

j.adicionaInstrumento(g);
    j.adicionaInstrumento(p);
}