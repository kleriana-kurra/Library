#ifndef BOOKCASEBASE_H
#define BOOKCASEBASE_H
#include <iostream>

using namespace std;

class BookcaseBase
{
    public :
        BookcaseBase(){cout << "A new BookcaseBase has been created." << endl;}
        ~BookcaseBase(){cout << "A BookcaseBase to be destroyed." << endl;}

};

#endif