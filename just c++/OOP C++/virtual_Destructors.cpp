//**********************************************
// Author: "shahmir khan"
// program: Use of "virtual Destructor" to free
// memory also Dynamic deallocation of memory
//**********************************************
#include<iostream>
using namespace std;
class base {
  public:
  base(){
   cout<<"constructing base\n";
  }
  virtual ~base(){       // Remember to make this destructor virtual otherwise we will face memory leak..
   cout<<"destructing base\n";
  } 
};
class derived: public base{
public:
 derived(){
   cout<<"constructing derived\n";
 }
 ~derived(){
   cout<<"destructing derived\n";
 }
};
int main(){
   derived *d = new derived;
   base *b;
   b=d;
   delete b; // Dyamically deallocating the memory throgh a destructor
   return 0;
}