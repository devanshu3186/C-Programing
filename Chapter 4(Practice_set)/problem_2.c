// Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>
int main()
{
    int i=10;
    for(i;i>=1;i--)
    {
        printf("10 x %d = %d\n", i, 10*i);
    }
    return 0;
}