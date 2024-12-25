/*1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs.  
b. Using inputs supplied by the user. */

#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the length and breadth: \n");
    scanf("%d %d", &l,&b);
    printf("The area of this rectangle is: %d\n", l*b);
    return 0;
}