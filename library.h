#include <iostream>

using namespace std;

class LibraryBase
{
    LibraryBase(){cout <<""<<endl;}
    ~LibraryBase(){cout <<"<<endl";}

};

class Shelf
{

};

class Cupboard
{

};

class Library
{

};

class Book
{
    string title;
    string nameSurenameOfAuthor;
    int ISBN;

    public :
        Book(string title , string nameSurenameOfAuthor, int ISBN):title(title), nameSurenameOfAuthor(nameSurenameOfAuthor), ISBN(ISBN){cout << "constructor" << endl;}
        ~Book();
        void setTitle(const string & title){this->title = title;}
        void setNameSurenameOfAuthor(const string NameSurenameOfAuthor){this->nameSurenameOfAuthor = nameSurenameOfAuthor;}
        void setISBN(int ISBN){this->ISBN = ISBN;}
        string getTitle() const{return title;}
        string getNameSurenameOfAuthor() const{return nameSurenameOfAuthor;}
        int getISBN() const{return ISBN;}
};






