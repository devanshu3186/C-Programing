//   6. Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>
int main()
{
    int a = 23, b = 34, c = 33, d = 4;
    if (a > b && a > c && a > d)
    {
        printf("The Greatest of all is: %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The Greatest of all is: %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The Greatest of all is: %d\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The Greatest of all is: %d\n", d);
    }
    return 0;
}