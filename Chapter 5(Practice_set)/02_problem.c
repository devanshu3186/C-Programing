// 2. Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>
double fahrenheit(double c);
double fahrenheit(double c)
{
  double f=(c*(9.0/5.0))+32;
   printf("The temperature of %.1lf degree C into Fahrenheit is: %.1lf degree F\n", c, f);
   return f;
}
int main()
{
    double c; 
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &c);
    fahrenheit(c);
  
    return 0;
}