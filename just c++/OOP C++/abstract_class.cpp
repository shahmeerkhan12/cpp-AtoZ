#include<iostream>
using namespace std;
class abstrac
{
   public:
   virtual void voice()=0;
};
class implement:public abstrac
{
  void voice()
  {
    cout<<"\n   dog barks   \n";
  }
};
int main(){
   abstrac *ab; //note that we cannot make an object of an abstract class: it will show error:
   implement obj;
   ab=&obj;
   ab->voice();
   return 0;
}