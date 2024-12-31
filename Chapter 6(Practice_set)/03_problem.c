// Write a program to change the value of a variable to ten times of its current 
// value.
#include<stdio.h>
int ten_x(int *a);
    int ten_x(int *a){
        *a=*a * 10;
        return *a;
        
    }
int main()
{
    int x=5;
    printf("The value of x is: %d\n",x);
    ten_x(&x);
    printf("The 10x value of x is: %d\n",x);
    
    return 0;
}