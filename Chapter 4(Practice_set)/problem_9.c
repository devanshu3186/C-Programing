// 9. Repeat 8 using while loop.

#include <stdio.h>
int main()
{

    double i = 1, num, factorial = 1;
    printf("Enter any positive number: ");
    scanf("%lf", &num);
    // if (num == 0)
    // {
    //     factorial = 1;
    // }
    // else
    {
       while(i<=num)
        {
            factorial *= i;
            i++;
        }
    }
    printf("The factorial of %.0lf is: %.0lf\n", num, factorial);

    return 0;
}