#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;

    printf("value of a is: %d\n", a);
    printf("vale at address of  pointer b is: %d\n", *b);
    printf("value at address of ponter c is: %d\n", **c);
    printf("value at address of ponter c is: %p\n", *c);
    printf("Address of a is: %p\n", &a);
    return 0;
}