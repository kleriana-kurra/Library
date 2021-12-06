#include <iostream>
#include "cabinet.h"


using namespace std;

Cabinet :: Cabinet(const int & NMAX)
{
    for(int i = 0; i < CABINETSHELVESNUMBER; i++)
    {
        shelf[i] = new Shelf(NMAX);
    }
    cout << "A new Cabinet has been created." << endl;
}
Cabinet :: ~Cabinet()
{
    cout << "A Cabinet to be destroyed." << endl;
    for(int i = 0; i < CABINETSHELVESNUMBER; i++)
    {
        delete shelf[i];
    }
}

bool Cabinet :: place_book(const int & placeNumber, Book & book)
{
    switch (placeNumber)
    {
    case 1 :
        return this->shelf[0]->place_book(book);
        break;
    case 2 :
        return this->shelf[1]->place_book(book);
        break;
    default:
        cout << "ERROR : Give 1 or 2." << endl;
        return false;
    }
}