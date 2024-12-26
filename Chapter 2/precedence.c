#include<stdio.h>
int main()
{
    int a,b,c; a=10; b=20; c=30;
    printf("%d", a*b/c+c*a-67);// First a*b and C*a is solved.
    return 0;                  // Second a*b is being divided by c.                              
}                              // Third The value obtained by second step is boing added with c*a value.
                               // At last the value obtained by the above step is being subtracted from 67.