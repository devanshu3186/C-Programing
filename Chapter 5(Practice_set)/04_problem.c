// 4. Write a program using recursion to calculate nth element of Fibonacci series. 

#include <stdio.h>
int fibonacci(int n);
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int fib = fibonacci(n - 1) + fibonacci(n - 2);
        return fib;
    }
}
int main()
{
    int n;
    printf("Enter the nth elemnt of fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth fibonacci number is: %d\n ", n, fibonacci(n));
    return 0;
}