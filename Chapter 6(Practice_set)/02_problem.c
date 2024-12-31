// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
// a function and print its address. Are these addresses same? Why?
#include <stdio.h>
int address(int *i);
int address(int *i)
{
    printf("The address of i is: %p\n", i);
    return 0;
}
int main()
{
    int i = 11;
    printf("The address of i is: %p\n", &i);
    address(&i);
    return 0;
}