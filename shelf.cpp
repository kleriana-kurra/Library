#include <iostream>
#include "shelf.h"

using namespace std;

Shelf :: Shelf(const int & NMAX) : NMAX(NMAX)
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
            numberOfBooks++;
            this->book[i]->print();
            return true;
        }
    }
    cout << '\t' << '\t' << '\t' << "ERROR : Shelf is full." << endl;
    return false;
}

bool Shelf :: take_book()
{
    for(int i = 0; i < NMAX; i ++)
    {
        if(this->book[i] != NULL)
        {
            this->book[i] = NULL;
            numberOfBooks--;
            return true;
        }
    }
    cout << '\t' << '\t' << '\t' << "ERROR : Shelf is empty." << endl;
    return false;
}

void Shelf :: print() const
{
    if(numberOfBooks == 0)
    {
        cout << '\t' << '\t' << '\t' << "PRINT : Shelf is empty." << endl;
    }
    else
    {
        for(int i = 0; i < NMAX; i ++)
        {
            if(this->book[i] != NULL)
            {
                this->book[i]->print();
            }
            else
            {
                cout << '\t' << '\t' << '\t'<< "Empty place." << endl;
            }
        }
    }
}
