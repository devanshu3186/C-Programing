// 11. Implement 10 using other types of loops

#include <stdio.h>
#include <math.h>
int main()
{
    int num, i = 2, is_prime = 1;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        is_prime = 0;
    }
    else if (num == 2)
    {
        is_prime = 1;
    }
    else
    {

        do
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
            i++;
        } while (i < sqrt(num));
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
