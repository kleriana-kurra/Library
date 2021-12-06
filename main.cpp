#include <iostream>
#include "bookcase.h"
#include <ctime>

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

	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;
	cout << "                       Β. Να δημιουργεί " << L << " βιβλία." << endl;
	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;


	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;
	cout << "                                ~ Creating Books ~ " << endl;
	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;
	
	Book *book[L];

	for(int i = 0; i < L; i++)
	{
		book[i] = new Book("title" + to_string(i), "nameSurenameOfAuthor" + to_string(i), i);
	}


	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;
	cout << "                       Γ. Να πραγματοποιεί " << K1 << " τυχαίες τοποθετήσεις βιβλίων στη βιβλιοθήκη." << endl;
	cout << endl << "-----------------------------------------------------------------------------------------------------------------------------" << endl << endl ;


	int numberOfBooksToPlace = L;
	if(L > K1)
	{
		numberOfBooksToPlace = K1;
	}
	else if(L < K1)
	{
		cout << "ERROR : You want to place " << K1 << " books, but you have " << L << " books. So " << L << " books will be placed." << endl;
	}
	
	srand((unsigned) time(0));

	for(int i = 0; i < numberOfBooksToPlace; i++)
	{
		int randomShelf = rand() % (5) + 1;
		bookCase.place_book(randomShelf, *book[i]);
	}

	
	// Deleting Books 
	for(int i = 0; i < L; i++)
	{
		delete book[i];
	}

	cout << "                             --- THE PROGRAM ENDED ---                                 " << endl << endl ;
	return 0;
}