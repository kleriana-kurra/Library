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
            cout << "Placing book in top bookcase shelf." << endl;
            if(this->shelf[0]->place_book(book))
            {
                numberOfBooks++;
                return true;
            }
            cout << "ERROR : Failed to place book in top bookcase shelf." << endl;
            return false;
        case 2 :
            cout << "Placing book in middle bookcase shelf." << endl;
            if(this->shelf[1]->place_book(book))
            {
                numberOfBooks++;
                return true;
            }
            cout << "ERROR : Failed to place book in middle bookcase shelf." << endl;
            return false;
        case 3 :
            cout << "Placing book in bottom bookcase shelf." << endl;
            if(this->shelf[2]->place_book(book))
            {
                numberOfBooks++;
                return true;
            }
            cout << "ERROR : Failed to place book in bottom bookcase shelf." << endl;
            return false;
        case 4 :
            cout << "Placing book in top cabinet shelf." << endl;
            if(this->cabinet.place_book(1, book))
            {
                numberOfBooks++;
                return true;
            }
            cout << "ERROR : Failed to place book in top cabinet shelf." << endl;
            return false;
        case 5 :
            cout << "Placing book in bottom cabinet shelf." << endl;
            if(this->cabinet.place_book(2, book))
            {
                numberOfBooks++;
                return true;
            }
            cout << "ERROR : Failed to place book in bottom cabinet shelf." << endl;
            return false;
        default :
            cout << "ERROR : Give number between 1 - 5." << endl;
            return false;
    }
}

bool Bookcase :: take_book(const int & placeNumber)
{
    switch(placeNumber)
    {
        case 1 :
            cout << "Taking book from top bookcase shelf." << endl;
            if(this->shelf[0]->take_book())
            {
                numberOfBooks--;
                this->shelf[0]->print();
                return true;
            }
            this->shelf[0]->print();
            cout << "ERROR : Failed to take book from top bookcase shelf." << endl;
            return false;
        case 2 :
            cout << "Taking book from middle bookcase shelf." << endl;
            if(this->shelf[1]->take_book())
            {
                numberOfBooks--;
                this->shelf[1]->print();
                return true;
            }
            this->shelf[1]->print();
            cout << "ERROR : Failed to take book from middle bookcase shelf." << endl;
            return false;
        case 3 :
            cout << "Taking book from bottom bookcase shelf." << endl;
            if(this->shelf[2]->take_book())
            {
                numberOfBooks--;
                this->shelf[2]->print();
                return true;
            }
            this->shelf[2]->print();
            cout << "ERROR : Failed to take book from bottom bookcase shelf." << endl;
            return false;
        case 4 :
            cout << "Taking book from top cabinet shelf." << endl;
            if(this->cabinet.take_book(1))
            {
                numberOfBooks--;
                this->cabinet.print(1);
                return true;
            }
            this->cabinet.print(1);
            cout << "ERROR : Failed to take book from top cabinet shelf." << endl;
            return false;
        case 5 :
            cout << "Taking book from bottom cabinet shelf." << endl;
            if(this->cabinet.take_book(2))
            {
                numberOfBooks--;
                this->cabinet.print(2);
                return true;
            }
            this->cabinet.print(2);
            cout << "ERROR : Failed to take book from bottom cabinet shelf." << endl;
            return false;
        default :
            cout << "ERROR : Give number between 1 - 5." << endl;
            return false;
    }
}

void Bookcase :: print()
{   
    cout << "Printing the bookcase : " << endl;

    cout << '\t' << "Printing the cabinet :" << endl;
    this->cabinet.print();
    cout << endl;
    
    for(int i = 0; i < BOOKCASESHELVESNUMBER; i++)
    {

        cout << '\t' << "Printing the " << i << " shelf : " << endl;
        shelf[i]->print();
        cout << endl;
    }
}