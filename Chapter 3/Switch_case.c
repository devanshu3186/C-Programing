#include <stdio.h>
int main()
{
    char a;
    double num1, num2, result;
    printf("Enter first number: \n");
    scanf("%lf", &num1);

    printf("Enter your operator: \n");
    scanf(" %c", &a);

    printf("Enter second number: \n");
    scanf("%lf", &num2);
    switch (a)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %lf\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result = %lf\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result = %lf\n", result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    default:
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}