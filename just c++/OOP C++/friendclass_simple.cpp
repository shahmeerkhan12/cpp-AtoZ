# include<iostream>
using namespace std;
class book{
int num;
public:
book()
{
num=29;
}
friend class course;
};
class course{
int i;
public:
course()
{
i=39;
}
void disp_sum(book number){
int sum=i+number.num;
cout<<"sum of integer num and i = "<<sum;
}
};
int main(){
book b;
course c;
c.disp_sum(b);
}