#include <stdio.h>
int main()
{
    double i = 1;
    double n;
    printf("Enter any natural number: ");
    scanf("%lf", &n);
    for (; i <= n; i++)
    {
        printf("%.0lf\n", i);
    }
    return 0;
}