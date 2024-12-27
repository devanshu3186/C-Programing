
// 1. Write a program to print multiplication table of a given number n.

#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}