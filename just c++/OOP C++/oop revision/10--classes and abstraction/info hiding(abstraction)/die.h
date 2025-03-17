class die
{
private:
   int num;
   /* data */
public:
   // default constructor
   // sets the default number to 1
   die(/* args */);
   // function to roll a die
   // this function uses a built in funciton that generates
   // random number between 1 and 6, and stores the number in the instance
   //  variable num and returns it.
   int roll();
   // function to return the number on the top face of the die
   //  also reuturns the instance variable num
   int get_num() const;
};
