//
// Created by Geral on 19/03/2024.
//

#ifndef PROJETOCPP_BOOK_H
#define PROJETOCPP_BOOK_H



#include <iostream>

using namespace std;

class Book {
private:
    int id;
    static int counter;
    string title;
    string nome;
public:
    int getId() const;

    void setId(int id);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getNome() const;

    void setNome(const string &nome);

    Book(int id, const string &title, const string &nome);
    Book(const string &title, const string &nome);
};




#endif //PROJETOCPP_BOOK_H
