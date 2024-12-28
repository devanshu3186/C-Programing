#include <stdio.h>

// Function declaration
int factorial(int num);

// Function definition
int factorial(int num)
{
    int f;
    if (num <= 1) // Base case: factorial of 0 or 1 is 1
    {
        return 1;
    }
    else // Recursive case
    {
        f = num * factorial(num - 1);
        return f;
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num); // Pass the address of num here

    // Calculate the factorial
    int c = factorial(num);

    // Print the result
    printf("The factorial of %d is: %d\n", num, c);
    return 0;
}
