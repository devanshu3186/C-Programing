// Write a function and pass the value by reference.
#include <stdio.h>

int value_ref(int *x);
int value_ref(int *x)
{
    int value = *x;
    printf("The value of a by reference is: %d\n", value);
    return value;
}
int main()
{
    int a = 100;
    printf("The value of a is: %d\n", a);
    value_ref(&a);
    return 0;
}