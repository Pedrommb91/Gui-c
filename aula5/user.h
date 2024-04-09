//
// Created by Geral on 19/03/2024.
//

#ifndef PROJETOCPP_USER_H
#define PROJETOCPP_USER_H


#include <iostream>

using namespace std;

class user {
private:
    string nome;
    string course;
    int nMec;
public:
    user();
   user(string name, string curso , int numeromec);
   ~user();

    string getnome() const;
    void setnome(std:: string novonome );

    string getcourse() const;
    void  setcourse(std::string novocourse);

   int getnMec() const ;
   void setnMec(int novonMec);



};


#endif //PROJETOCPP_USER_H
