// 5. Write a program to sum first ten natural numbers using while loop.
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("The value of sum is: %d\n", sum);
    return 0;
}