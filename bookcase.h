#ifndef BOOKCASE_H
#define BOOKCASE_H
#include <iostream>
#include "bookcaseBase.h"
#include "cabinet.h"
#include "shelf.h"

using namespace std;
#define BOOKCASESHELVESNUMBER 3

class Bookcase
{
    BookcaseBase bookcaseBase;
    Cabinet cabinet;
    Shelf *shelf[BOOKCASESHELVESNUMBER];

    public :
        Bookcase(const int &);
        ~Bookcase();
};

#endif



