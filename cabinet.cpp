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
        if(this->shelf[0]->place_book(book))
        {
            return true;
        }
        cout << '\t' << '\t' << '\t' << "ERROR : Couldn't place book in top cabinet shelf." << endl;
        return false;
        break;
    case 2 :
        if(this->shelf[1]->place_book(book))
        {
            return true;
        }
        cout << '\t' << '\t' << '\t' << "ERROR : Couldn't place book in bottom cabinet shelf." << endl;
        return false;
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
        if(this->shelf[0]->take_book())
        {
            return true;
        }
        cout << '\t' << '\t' << '\t' << "ERROR : Couldn't take book from top cabinet shelf." << endl;
        return false;
        break;
    case 2 :
        if(this->shelf[1]->take_book())
        {
            return true;
        }
        cout << '\t' << '\t' << '\t' << "ERROR : Couldn't take book from bottom cabinet shelf." << endl;
        return false;
        break;
    default:
        cout << '\t' << '\t' << '\t' << "ERROR : Give 1 or 2." << endl;
        return false;
    }
}

void Cabinet :: print() const
{
    cout << '\t' << '\t' << "Printing the top shelf of cabinet : " << endl;
    print(1);
    cout << endl << '\t' << '\t' << "Printing the bottom shelf of cabinet : " << endl;
    print(2);
}

void Cabinet :: print(const int & placeNumber) const
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