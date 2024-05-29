//
// Created by guilh on 29/05/2024.
//

#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H
#include<iostream>
using namespace std;

class Instrumento {
private:
string marca;
public:
    Instrumento()=default;
     Instrumento(string marca);
    virtual string getInfo();
   // string getmarca();

};



#endif //INSTRUMENTO_H
