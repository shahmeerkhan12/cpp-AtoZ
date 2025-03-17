#include<iostream>
using namespace std;
class inventory
{
public:
inventory(); //Line 1
inventory(string); //Line 2
inventory(string, int, double); //Line 3
inventory(string, int, double, int); //Line 4
//Add additional functions
private:
string name;
int itemNum;
double price;
int unitsInStock;
};
inventory::inventory() //default constructor
{
name = "";
itemNum = -1;
price = 0.0;
unitsInStock = 0;
}
inventory::inventory(string n)
{
name = n;
itemNum = -1;
price = 0.0;
unitsInStock = 0;
}
inventory::inventory(string n, int iNum, double cost)
{
name = n;
itemNum = iNum;
price = cost;
unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost, int inStock)
{
name = n;
itemNum = iNum;
price = cost;
unitsInStock = 0;
}
int main()
{
inventory item1;
inventory item2("Dryer");
inventory item3("Washer", 2345, 278.95);
inventory item4("Toaster", 8231, 34.49, 200);
}
