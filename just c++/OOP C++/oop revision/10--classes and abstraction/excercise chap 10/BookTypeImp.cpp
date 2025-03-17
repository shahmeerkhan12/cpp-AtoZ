#include <iostream>
#include <string>
#include "Booktype.h"

void Booktype::SetTitle(string Booktitle)
{
   Title = Booktitle;
}
void Booktype::SetAuthors(string author1, string author2, string author3, string author4)
{
   Author = author1 + " " + author2 + " " + author3 + " " + author4 + ".";
}
void Booktype::SetDateofPublication(string DateofPub)
{
   published = DateofPub;
}
void Booktype::setPrice(int BookPrice)
{
   price = BookPrice;
}
void Booktype::setISBN(int Liscence)
{
   ISBN = Liscence;
}
void Booktype::setStockCopies(int numberofcopies)
{
   Booktype::numOfcopies = numberofcopies;
}
void Booktype::printBookDetails()
{
   cout << "Book Name : " << Title << endl
        << "Author : " << Author << endl
        << "Published Date : " << published << endl
        << "ISBN : " << ISBN << endl
        << "Price : " << price << endl
        << "No of copies : " << numOfcopies << endl;
   cout << "*----------------------------------*" << endl;
}

Booktype::Booktype()
{
   Title = ""; // default values for all
   Author = "";
   published = "";
   price = ISBN = numOfcopies = 0;
}
Booktype::~Booktype()
{
}