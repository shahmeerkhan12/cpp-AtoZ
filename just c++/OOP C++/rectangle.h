
class rectangletype
{
    double length, width;
    double area;

public:
    void getdata() //take inputs
    {
       std::cout << "enter length and width for the rectangle respectively:";
        std::cin >> length >> width;
    }
rectangletype operator *(const rectangletype& obj)const
{
rectangletype temp;
temp.length=length*obj.length;
temp.width=width*obj.width;
return temp;
}
rectangletype operator /(const rectangletype& obj)const
{
rectangletype temp;
temp.length=length/obj.length;
temp.width=width/obj.width;
return temp;
}
    void display()     //shows output
    {
        area = length * width;
     std:: cout << "the area of rectangle is: \n";
     std:: cout << area << "\n";
    }
};