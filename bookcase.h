#ifndef BOOKCASE_H
#define BOOKCASE_H
#include <iostream>

using namespace std;

class Bookcase
{

    public :
        Bookcase(){cout << "By Constractor : A Bookcase was built." << endl;}
        ~Bookcase(){cout << "By Destractor : A Bookcase was destroyed" << endl;}
};

#endif



