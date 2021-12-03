#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;

class Book
{
    string title;
    string nameSurenameOfAuthor;
    int ISBN;

    public :
        Book(string title , string nameSurenameOfAuthor, int ISBN):title(title), nameSurenameOfAuthor(nameSurenameOfAuthor), ISBN(ISBN){}
        ~Book();
        void setTitle(const string & title){this->title = title;}
        void setNameSurenameOfAuthor(const string & NameSurenameOfAuthor){this->nameSurenameOfAuthor = nameSurenameOfAuthor;}
        void setISBN(const int & ISBN){this->ISBN = ISBN;}
        string getTitle() const{return title;}
        string getNameSurenameOfAuthor() const{return nameSurenameOfAuthor;}
        int getISBN() const{return ISBN;}
};

#endif