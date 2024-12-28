#include <stdio.h>
int sum(int , int ); // function prototype

int sum(int x, int y) // function definition
{
    printf("The sum is: %d\n", x + y);
    return x + y; // here, the value of x+y (i.e 30) is returned to the calling function{sum(a,b)} or stored inside the calling_variable.
}

int main()
{
    int a = 10, b = 20;
    int calling_variable1 = sum(a, b); // function call
    printf("The value of calling variable1 is: %d\n", calling_variable1);

    int calling_variable2 = sum(30, 40); // function call
    printf("The value of calling variable2 is: %d\n", calling_variable2);

    int calling_variable3 = sum(50, 60); // function call
    printf("The value of calling variable3 is: %d\n", calling_variable3);

    return 0;
}