// 8. Write a program to calculate the factorial of a given number using a for loop. 

#include <stdio.h>
int main()
{
    double i = 1, num, factorial = 1;
    printf("Enter any positive number: ");
    scanf("%lf", &num);                  
    // if (num == 0)                           // 0 kai factorial kai liye specific condition deni zaruri nhi hotti hai!
    // { 
    //     factorial = 1;
    // }
    // else
    {
        for (i; i <= num; i++)
        {
            factorial *= i;
        }
    }
    printf("The factorial of %.0lf is: %.0lf\n", num, factorial);
    return 0;
}