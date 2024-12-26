// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);
    printf("Your character is: %c\n", ch);
    printf("Your character value is: %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is not a lowercase\n");
    }
    return 0;
}