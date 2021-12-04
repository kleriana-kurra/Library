#include <iostream>
#include "shelf.h"

using namespace std;

Shelf :: Shelf(const int & NMAX):NMAX(NMAX)
{
    book = new Book * [NMAX];
    cout << "A new Shelf has been created." << endl;
}
Shelf :: ~Shelf()
{
    cout << "A Shelf to be destroyed." << endl;
    delete [] book;
}