// 7. Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>
int main()
{
    int i = 1, mul, sum = 0;
    for (i; i <= 10; i++)
    {
        sum+=(8*i);
    }
    printf("The sum of numbers occuring in the table of 8 is: %d\n",sum);
    return 0;
}