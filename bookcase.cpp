#include <iostream>
#include "bookcase.h"

using namespace std;

Bookcase::Bookcase(const int & NMAX) : cabinet(NMAX)
{
    for(int i = 0; i < BOOKCASESHELVESNUMBER ; i++)
    {
        this->shelf[i] = new Shelf(NMAX);
    }
    cout << "A new Bookcase has been created." << endl;
}

Bookcase::~Bookcase()
{
    cout << "A Bookcase to be destroyed." << endl;
    for(int i = 0; i < BOOKCASESHELVESNUMBER ; i++)
    {
        delete this->shelf[i];
    }
}
