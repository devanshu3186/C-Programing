// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
#include<stdio.h>
int main()
{
    int sum=0,i=1;
    for(i;i<=10;i++)
    {
        sum+=i;
    }
    printf("The sum of first 10 natural number is: %d\n",sum);
    return 0;
}