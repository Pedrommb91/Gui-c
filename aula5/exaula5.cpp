//
// Created by Geral on 19/03/2024.
//
#include "User.h"
#include "book.h"
#include <iostream>

using namespace std;

int main() {
    int opcao;

    do {
        cout << "1-enrol student\n"
                "2-remove student\n"
                "3-print list of users\n"
                "4-register new book\n"
                "5-print list of books\n"
                "6-load\n"
                "7-return\n"
                "8-exit\n";

        int *array= new int[10];
        cin >> opcao;
        switch (opcao) {

            case 1:
                user a1;
string nome, curso;
int num;
cout<<"intuduz o nome"<<endl;
cin>>nome;
a1.setnome(nome);
cout<<"intruduz o curso"<<endl;
cin>>curso;
a1.setcourse(curso);
cout<<"intruduz o nMec"<<endl;
cin>>num;
a1.setnMec(num);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
        }
    } while (opcao != 8);
}