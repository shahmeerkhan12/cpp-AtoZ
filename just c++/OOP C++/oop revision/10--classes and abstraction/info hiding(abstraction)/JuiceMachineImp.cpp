/*/////////////////////////
***Program:JuiceMachine)))
***Author: Shahmir Khan)))
***Created: 10-jan-24)))
*/
/////////////////////////
#include <iostream>
#include "JuiceMachine.h"
using namespace std;
void show_selection() // shows the available products
{
   cout<<"**______________________________**"<<endl;
   cout << "Welcome to Aslam juice shop" << endl
        << "please select one option below:" << endl;
        cout<<"**______________________________**"<<endl;
       cout << "1 for Banana_Juice:" << endl
        << "2 for Mango_Juice:" << endl
        << "3 for Straberry_Juice:" << endl
        << "4 for Orange_Juice:" << endl
        << "9 to exit:" << endl; // want to exit
        cout<<"**________________________________**"<<endl;
}
void sellProduct(DespenserType &product, cashRegister &pcounter) // two reference parameters
{                                                                // to access both the members of the classes
   int amount;                                                   // to hold the amount entered by the customer
   int extraAmount;                                              // to hold the extra amount needed
   if (product.getNoOfItems() > 0)                               // MEAN IF THE ITEMS ARE PRESENT
   {
      cout << "plesase enter: " << product.getCost() << " cents" << endl;
      cin >> amount;
      if (amount < product.getCost())
      {
         cout<<endl;
         cout << "please enter another amount of " << product.getCost() - amount << " cents" << endl;
         cin >> extraAmount;
         amount = amount + extraAmount; // get the total amount
      }
      if (product.getCost() <= amount) // if the cost=amount entered
      {
         pcounter.AcceptAmount(amount); // accept the amount and to cashonhand
         product.makeSale();            // accomplish a sale by decremnting the noofitems
        cout<<"**______________________________**"<<endl;
         cout << "Collect your item at the bottom and enjoy," << endl;
         
      }
      else
         cout << "The amount you deposited is not enough. "
              << "collect what You deposited " << endl;
   }
   else
      cout << "The product is sold out. " << endl;
}
int main()
{
   DespenserType orange(100, 40);
   DespenserType banana(100, 40);
   DespenserType mango(100, 40);
   DespenserType strawberry(100, 40);
   cashRegister Cash1;
   cout << "The amount present at CashRegister currently: " << Cash1.getCurrentBalance() << endl;
   cout << "Please enter your order from the choices below: " << endl;
   show_selection();
   int JuiceType;
   cin >> JuiceType;
   while (JuiceType!=9)
   {
      switch (JuiceType)
      {
      case 1:
         sellProduct(orange, Cash1);
         break;
      case 2:
         sellProduct(banana, Cash1);
         break;
      case 3:
         sellProduct(mango, Cash1);
         break;
      case 4:
         sellProduct(strawberry, Cash1);
         break;
      default:
         cout << "Invalid Choice:" << endl;

      } // end swtich
      show_selection();
      cin >> JuiceType;
   }
   return 0;
}