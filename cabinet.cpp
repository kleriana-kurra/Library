#include <iostream>
#include "cabinet.h"


using namespace std;

Cabinet :: Cabinet(const int & NMAX)
{
    for(int i = 0; i < CABINETSHELVESNUMBER; i++)
    {
        shelf[i] = new Shelf(NMAX);
    }
    cout << "A new Cabinet has been created." << endl;
}
Cabinet :: ~Cabinet()
{
    cout << "A Cabinet to be destroyed." << endl;
    for(int i = 0; i < CABINETSHELVESNUMBER; i++)
    {
        delete shelf[i];
    }
}