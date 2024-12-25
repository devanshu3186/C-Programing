/*2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.*/

#include<stdio.h>
int main()
{
    float pi=3.14, r=15, h=30;
    printf("Area of circle is: %f\n", pi*r*r);
    printf("Volume of cylinder is: %f\n", pi*r*r*h);
    return 0;
}