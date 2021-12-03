#ifndef CABINET_H
#define CABINET_H
#include <iostream>

using namespace std;

class Cabinet
{
    public :
        Cabinet(){cout << "By Constractor : A Cabinet was built" << endl;}
        ~Cabinet(){cout << "By Destractor : A Cabinet was destroyed" << endl;}
};

#endif