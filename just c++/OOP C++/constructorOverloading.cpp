#include<iostream>
using namespace std;
class inventory{
public:
inventory(); //Line 1
inventory(string); //Line 2
inventory(string, int, double); //Line 3
inventory(string, int, double, int);
void display()
{
    cout<<"The Information about the Item is:\n";
    cout<< inventory("car",23,12000,30)"\n";
    cout<<inventory("car",23,12000);   
}
private:
string name;
int itemNum;
double price;
int unitsInStock;
};
//******************************************
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
unitsInStock = inStock;
}

/////////////////////////////////////////////
int main()
{
   inventory i1;
    i1.display();
    inventory("car",23,12000,30);
    inventory("car",23,12000);
}