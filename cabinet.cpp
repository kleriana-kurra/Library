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

bool Cabinet :: take_book(const int & placeNumber)
{
    switch (placeNumber)
    {
    case 1 :
        return this->shelf[0]->take_book();
        break;
    case 2 :
        return this->shelf[1]->take_book();
        break;
    default:
        cout << "ERROR : Give 1 or 2." << endl;
        return false;
    }
}

void Cabinet :: print()
{
    cout << '\t' << '\t' << "Printing the top shelf of cabinet : " << endl << endl;
    print(1);
    cout << '\t' << '\t' << "Printing the bottom shelf of cabinet : " << endl << endl;
    print(2);
}

void Cabinet :: print(const int & placeNumber)
{
    switch (placeNumber)
    {
    case 1 :
        this->shelf[0]->print();
        break;
    case 2 :
        this->shelf[1]->print();
        break;
    default:
        cout << "ERROR : Give 1 or 2." << endl;
    }
}