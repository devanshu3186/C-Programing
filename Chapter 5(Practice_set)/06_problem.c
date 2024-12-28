// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers. 

#include <stdio.h>
int sum_natural(int n);
int sum_natural(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int sum = n + sum_natural(n - 1);

        return sum;
    }
}
int main()
{
    int n;
    printf("Enter any natural number: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is: %d\n", n, sum_natural(n));
    return 0;
}