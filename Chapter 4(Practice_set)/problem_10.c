// 10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, is_prime = 1;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}