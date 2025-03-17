#include <string>
using namespace std;
class Booktype
{
private:
   string Title;
   string Author;
   string published;
   int price, ISBN, numOfcopies;
   // variables to define a book by its TITLE,author_NAME(S)(max: 4),ISBN,PRICE,YEAR OF PUBLISHING

public:
   void SetTitle(string BookTitle);
   // setting the title of the book
   void SetAuthors(string Author1, string Author2 = "", string Author3 = "", string author4 = "");
   // setting the Authors of the book
   void SetDateofPublication(string DateofPub);
   // function to set the published date
   void setPrice(int BookPrice);
   // Function to set the price of book
   void setISBN(int Liscence);
   // Functionto set the ISBN number
   void setStockCopies(int numberofcopies);
   // function to set number of copies present in the book
   void printBookDetails();
   Booktype(/* args */);
   // constructor to set default values
   ~Booktype();
};

