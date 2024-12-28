// 5. What will the following line produce in a C program: 
// int a = 4; 
// printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>
int main()
{
    int a = 4;
    printf("%d %d %d \n", a,++a, a++ );
    return 0;
}
// The answer to this question is 6 6 4 not 4 5 5, because the evaluation order in compiler is right to left by default not left to right, 
// otherwise both the answers are correct in their own.