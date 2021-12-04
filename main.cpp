#include <iostream>
#include "bookcase.h"

using namespace std;


int main(int argc, char* argv[])
{
    cout << "                             --- THE PROGRAM STARTED ---                                 " << endl ;

	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;
	cout << "                       A. Nα δημιουργεί μια βιβλιοθήκη." << endl;
	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;

	cout << "                                ~ Creating Bookcase ~ " << endl << endl;

	int NMAX = stoi(argv[1]), L = stoi(argv[2]), K1 = stoi(argv[3]), K2 = stoi(argv[4]);

    cout << "NMAX = " << NMAX << " L = " << L << " K1 = " << K1 << " K2 = " << K2 << endl;
	Bookcase bookCase(NMAX);
	
	cout << "                             --- THE PROGRAM ENDED ---                                 " << endl << endl ;
	return 0;
}