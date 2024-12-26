#include<stdio.h>
int main()
{
    int a=1, b=1;
    if (a&&b)
    {
        printf("AND operator is wroking\n");
    }
    else{
        printf("AND operator is not wroking\n");
    }
    if (a||b)
    {
        printf("OR operator is wroking\n");
    }
    else{
        printf("OR operator is not wroking\n");
    }
    if (!a)
    {
        printf("NOT operator is wroking\n");
    }
    else{
        printf("NOT operator is not wroking\n");
    }
    return 0;
}