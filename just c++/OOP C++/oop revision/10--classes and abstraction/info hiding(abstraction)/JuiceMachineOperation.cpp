#include <iostream>
#include "JuiceMachine.h"
// class cashregister definition
int cashRegister::getCurrentBalance() const
{
   return cashonHand;
}
void cashRegister::AcceptAmount(int cashin)
{
   cashonHand = cashonHand + cashin;
}
cashRegister::cashRegister(int cashin)
{
   if (cashin >= 0)
   {
      cashonHand = cashin;
   }
   else
      cashonHand = 500;
}
// class despenser type implementation
int DespenserType::getNoOfItems() const
{
   return NumberOfItems;
}
int DespenserType::getCost() const
{
   return cost;
}
void DespenserType::makeSale()
{
   NumberOfItems--;
}
DespenserType::DespenserType(int setNoOfItems, int setCost)
{
   if (setNoOfItems >= 0)
   {
      NumberOfItems = setNoOfItems;
   }
   else
      NumberOfItems = 100;
   if (setCost >= 0)
   {
      cost = setCost;
   }
   else
      cost = 60;
}