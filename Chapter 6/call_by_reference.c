#include <stdio.h>
void swap(int *x, int *y);
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 10;
    swap(&a, &b);
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    return 0;
}