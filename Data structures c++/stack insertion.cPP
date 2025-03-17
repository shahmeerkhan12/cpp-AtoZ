#include <iostream>
int MAXSIZE = 8;
int stack[8];
int top = 8;

/* Check if the stack is full*/
int isfull(){
if(top == MAXSIZE)
return 1; // this expression evaluate to TRUE and the expression in line 8 evluate to FALSE thus its execution fails.
else
return 0;
}

/* Function to insert into the stack */
void push(int data){
if(!isfull()) {   // line 8
top = top + 1;
stack[top] = data;
} else {
printf("Could not insert data, Stack is full.\n");
}
}
/* Main function */
int main(){
int i;
push(44);
push(10);
push(62);
push(123);
push(15);
printf("Stack Elements: \n");

// print stack data
for(i = 0; i < 8; i++) {
printf("%d ", stack[i]);
}
return 0;
}
