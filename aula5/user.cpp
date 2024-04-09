//
// Created by Geral on 19/03/2024.
//

#include "user.h"
using namespace std;

user::user() {}

user::user(string name, string curso, int numeromec) {
    name = nome;
    curso = course;
    numeromec = nMec;
}

user::~user() {}

string user::getnome() const {
return nome;
}

void user::setnome(std::string novonome) {
    nome=novonome;
}

 string user::getcourse() const {
    return course;
}

void user::setcourse(std::string novocourse){
    course=novocourse;
}


 int user:: getnMec() const {
return nMec;
}

    void user::setnMec(int novonMec){
    nMec=novonMec;
}