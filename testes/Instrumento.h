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
    virtual string getInfo()=0;
   string getmarca();
//void setmarca(string marca);
};



#endif //INSTRUMENTO_H
