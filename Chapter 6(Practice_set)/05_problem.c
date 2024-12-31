// Write a program using a function which calculates the sum and average of two 
// numbers. Use pointers and print the values of sum and average in main().
#include <stdio.h>
float sum(float *x, float *y);
float sum(float *x, float *y)
{
    float add = *x + *y;
    return add;
}

float average(float *x, float *y);
float average(float *x, float *y)
{
    float avg = (*x + *y) / 2;
    return avg;
}
int main()
{
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("The value of sum is: %.2f\n", sum(&a, &b));
    printf("The value of average is: %.2f\n", average(&a, &b));

    return 0;
}