// 1. Write a program using function to find average of three numbers.

#include <stdio.h>

int average(int a, int b, int c);

int average(int a, int b, int c)
{
    int avg = (a + b + c) / 3;
    printf("The average of %d, %d and %d is: %d\n", a, b, c, avg);
    return avg;
}
int main()
{
    int a, b, c;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter third numbers: ");
    scanf("%d", &c);
    average(a, b, c);
    // printf("The value of average is: %d\n",average(a, b, c));
    return 0;
}