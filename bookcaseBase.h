#ifndef BOOKCASEBASE_H
#define BOOKCASEBASE_H
#include <iostream>

using namespace std;

class BookcaseBase
{
    public :
        BookcaseBase(){cout << "By Constractor : A Bookcase base base was built." << endl;}
        ~BookcaseBase(){cout << "By Destractor : A Bookcase base base was destroyed" << endl;}

};

#endif