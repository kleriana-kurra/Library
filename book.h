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
        Book(const string & title , const string & nameSurenameOfAuthor, const int & ISBN) : title(title), nameSurenameOfAuthor(nameSurenameOfAuthor), ISBN(ISBN)
        {
            cout << "Book created with Title : " << this->title << " Name/Surename of Author : " << this->nameSurenameOfAuthor << " ISBN : " << this->ISBN << endl;
        }

        void setTitle(const string & title){this->title = title;}
        void setNameSurenameOfAuthor(const string & nameSurenameOfAuthor){this->nameSurenameOfAuthor = nameSurenameOfAuthor;}
        void setISBN(const int & ISBN){this->ISBN = ISBN;}

        string getTitle() const{return title;}
        string getNameSurenameOfAuthor() const{return nameSurenameOfAuthor;}
        int getISBN() const{return ISBN;}

        void print(){cout << '\t' << '\t' << '\t' << "Title : " << title << " Name/Surename of Author : " << nameSurenameOfAuthor << " ISBN : " << ISBN << endl;}
};

#endif