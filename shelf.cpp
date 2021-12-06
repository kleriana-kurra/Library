#include <iostream>
#include "shelf.h"

using namespace std;

Shelf :: Shelf(const int & NMAX):NMAX(NMAX)
{
    book = new Book * [NMAX];
    for(int i = 0 ; i < NMAX ; i++)
    {
        book[i] = NULL;
    }
    cout << "A new Shelf has been created." << endl;
}
Shelf :: ~Shelf()
{
    cout << "A Shelf to be destroyed." << endl;
    delete [] book;
}

bool Shelf :: place_book(Book & book)
{
    for(int i = 0; i < NMAX; i ++)
    {
        if(this->book[i] == NULL)
        {
            this->book[i] = &book;
            return true;
        }
    }
    return false;
}