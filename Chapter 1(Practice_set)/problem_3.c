/*3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). */

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celsius:\n");
    scanf("%f",&c);
    printf("The temperature of %f degree C into Fahrenheit is: %f degree F\n", c,c*(9.0/5.0)+32);
    return 0;
}