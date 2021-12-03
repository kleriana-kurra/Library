#ifndef SHELF_H
#define SHELF_H
#include <iostream>

using namespace std;

class Shelf
{
    public :
        Shelf(){cout << "By Contractor : A Shelf was built" << endl;}
        ~Shelf(){cout << "By Destractor : A Shelf was destroyed" << endl;}

};

#endif