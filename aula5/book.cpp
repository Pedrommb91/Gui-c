//
// Created by Geral on 19/03/2024.
//

#include "book.h"
#include "Book.h"

int Book::counter = 100;

Book::Book(int id, const string &title, const string &nome) : id(id), title(title), nome(nome) {}

Book::Book(const string &title, const string &nome):title(title), nome(nome) {
    id = counter++;
}
int Book::getId() const {
    return id;
}

void Book::setId(int id) {
    Book::id = id;
}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const string &Book::getNome() const {
    return nome;
}

void Book::setNome(const string &nome) {
    Book::nome = nome;
}



