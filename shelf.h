#ifndef SHELF_H
#define SHELF_H
#include <iostream>
#include "book.h"

using namespace std;

class Shelf
{
    int NMAX;
    Book ** book;
    int numberOfBooks;

    public :
        Shelf(const int &);
        ~Shelf();

        bool place_book(Book &);
        bool take_book();

        void print();

};

#endif