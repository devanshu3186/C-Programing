#include <stdio.h>
int main()
{
    int n;
    printf("Enter any natural number: ");
    scanf("%d", &n);
    for(n; n > 0; n--)
    {
        printf("%d\n", n);
    }
    return 0;
}