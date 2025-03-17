class cashRegister
{
public:
   // Fun to show current Cash on the cash register
   // PostCond: Fun should return the CashonHand
   int getCurrentBalance() const;
   // Should accept the amount entered by the customer
   // should increment the cashonHand
   // PostCond: cashonHand= CashonHand + amountin
   void AcceptAmount(int cashin);
   // constructor to set the value of cashonHand to some default value
   // postCond: cashonHand=Cashin;
   // if no value is specified for cashin in the object declaration then the default value is assigned(500)
   cashRegister(int cashin = 500);

private:
   // Variable to store the value of the cash in Register
   int cashonHand;
};
class DespenserType
{
public:
   // function to show the no of items present in the despenser
   // post cond: the no of items is returned
   int getNoOfItems() const;
   // function to show the cost of the item
   // post cond: the cost of the item is returned
   int getCost() const;
   // Function to reduce the number of items by 1
   // post Cond: noOfItems--;
   void makeSale();
   // constructor
   // Postcondition: NumberOfItems=setNoOfItems;
   // cost=setCost;
   // if No value is specifiFed for the parameters then the defulat values are assigned
   DespenserType(int setNoOfItems = 100, int setCost = 60);

private:
   // variable to hold the number of items in the despenser
   int NumberOfItems;
   // variavle to hold cost of each item
   int cost;
};