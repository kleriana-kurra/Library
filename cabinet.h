#ifndef CABINET_H
#define CABINET_H
#include <iostream>
#include "shelf.h"

using namespace std;
#define CABINETSHELVESNUMBER 2

class Cabinet
{
    Shelf *shelf[CABINETSHELVESNUMBER];
    
    public :
    
        Cabinet(const int &);
        ~Cabinet();
};

#endif