#include <iostream>
#include "bookcase.h"

using namespace std;

Bookcase :: Bookcase(const int & NMAX) : cabinet(NMAX)
{
    for(int i = 0; i < BOOKCASESHELVESNUMBER ; i++)
    {
        this->shelf[i] = new Shelf(NMAX);
    }
    cout << "A new Bookcase has been created." << endl;
}

Bookcase :: ~Bookcase()
{
    cout << "A Bookcase to be destroyed." << endl;
    for(int i = 0; i < BOOKCASESHELVESNUMBER ; i++)
    {
        delete this->shelf[i];
    }
}

bool Bookcase :: place_book(const int & placeNumber,Book & book)
{
    switch(placeNumber)
    {
        case 1 :
            if(this->shelf[0]->place_book(book))
            {
                numberOfBooks++;
                cout << "Placing book in top bookcase shelf." << endl;
                return true;
            }
            return false;
        case 2 :
            if(this->shelf[1]->place_book(book))
            {
                numberOfBooks++;
                cout << "Placing book in middle bookcase shelf." << endl;
                return true;
            }
            return false;
        case 3 :
            if(this->shelf[2]->place_book(book))
            {
                numberOfBooks++;
                cout << "Placing book in bottom bookcase shelf." << endl;
                return true;
            }
            return false;
        case 4 :
            if(this->cabinet.place_book(1, book))
            {
                numberOfBooks++;
                cout << "Placing book in top cabinet shelf." << endl;
                return true;
            }
            return false;
        case 5 :
            if(this->cabinet.place_book(2, book))
            {
                numberOfBooks++;
                cout << "Placing book in bottom cabinet shelf." << endl;
                return true;
            }
            return false;
        default :
            cout << "ERROR : Give number between 1 - 5." << endl;
            return false;
    }
}