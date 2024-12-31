// Write a program to print the address of a variable. Use this address to get the 
// value of the variable.
#include<stdio.h>
int main()
{
    int a=10;
    int *i=&a;
    printf("The address of a is: %p\n",&a);
    printf("The value of a is: %d\n",*(&a));
    printf("The value of a is: %d\n",*i);
    return 0;
}