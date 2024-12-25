/*4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. */

#include<stdio.h>
int main()
{
    float p,t,r;
    printf("Enter the principal, rate and time: \n");
    scanf("%f %f %f", &p,&t,&r);
    printf("The calculated Simple Interest is: %f\n",(p*t*r)/100);
    return 0;
}