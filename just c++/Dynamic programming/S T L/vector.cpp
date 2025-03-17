#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void display(vector<int> &v)
{
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }
   cout << endl;
}
int main()
{
   vector<int> vec;
   int element;
   int size;
   cout<<"\n Enter the size of the vector: ";
   cin>>size;
   for (int i = 0; i < size; i++)
   {
      cout << "Enter the element you wanna add to the vector: " << endl;
      cin >> element;
      vec.push_back(element);
     vec.size();
   }

   //vec.pop_back();
   display(vec);
   vector<int> :: iterator iter = vec.begin();
   vec.insert(iter,89);
   display(vec);
   vec.insert(iter+2,99);
   display(vec);
   return 0;
}