#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   string movie_name;
   double child_tickets, price_of_child_ticket;
   cout << "Enter the name of Movie:" << endl;
   getline(cin, movie_name);
   cout << endl;
   cout << "Enter the no of child tickets sold:";
   cin >> child_tickets;
   cout << endl;
   cout << "Enter the price of the child ticket:";
   cin >> price_of_child_ticket;
   cout << endl;
  //formating output
  cout<<setfill('.')<<left<<setw(35)<<"Name of Movie:"<<right<<" "
  <<movie_name<<endl;
  cout<<setfill('.')<<left<<setw(35)<<"child tickets sold:"<<right<<" "
  <<child_tickets<<endl;
  cout<<setfill('.')<<left<<setw(35)<<"price of child tickets:"<<right<<" "
  <<price_of_child_ticket<<endl;
   return 0;
}