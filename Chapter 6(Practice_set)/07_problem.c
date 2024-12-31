// Try problem 3 using call by value and verify that it does not change the value of 
// the said variable. 
#include<stdio.h>
int ten_x(int a);
    int ten_x(int a){
        a=a * 10;
        return a;
        
    }
int main()
{
    int x=5;
    printf("The value of x is: %d\n",x);
    ten_x(x);
    printf("The 10x value of x is: %d\n",x);
    
    return 0;
}