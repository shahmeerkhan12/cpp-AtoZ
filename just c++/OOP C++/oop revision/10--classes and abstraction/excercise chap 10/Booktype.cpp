#include <iostream>
#include "Booktype.h"
using namespace std;
int main()
{ // problem #08
   /*Write a program that uses the class bookType and tests various
operations on the objects of the class bookType. Declare an array
of 100 components of type bookType. Some of the operations that you
should perform are to search for a book by its title, search by ISBN, and
update the number of copies of a book.*/
   Booktype List[2];
   for (int i = 0; i < sizeof(List) / sizeof(List[1]); i++)
   {
      if (i == 0)
      {
         List[i].SetAuthors("Gulab_Singh", ", Abdullah Kadwani");
         List[i].SetDateofPublication("10,march,2009");
         List[i].SetTitle("The Magnificent");
         List[i].setISBN(90091);
         List[i].setStockCopies(100);
         List[i].setPrice(1299);
         List[i].printBookDetails();
      }
      /* what you can do for runtime inputs is you could declare some variables like Authors,
      Publish date, title, ISBN, stock copies, price and then take pass these values to the
       corresponding functions like the one for test*/
       string Authors="";
       cout<<"Please input the Authors' name(s)"<<endl;
       cin>>Authors;
       List[i].SetAuthors(Authors);
       List[i].SetDateofPublication("30,April,2000");
       List[i].SetTitle("Karamarmena");
       List[i].setISBN(90092);
       List[i].setStockCopies(200);
       List[i].setPrice(2299);
       List[i].printBookDetails();
   }

   return 0;
}
