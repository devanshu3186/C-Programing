// 1. What will be the output of this program:
// int a = 10;
// if (a = 11)
//    printf("I am 11");
// else
//     printf("I am not 11");

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter the marks: \n");
    scanf("%f", &marks);
    if (marks >= 90 && marks <= 100)
        printf("Your grade is A.\n");

    else if (marks >= 80 && marks < 90)
        printf("Your grade is B.\n");

    else if (marks >= 70 && marks < 80)
        printf("Your grade is C.\n");

    else if (marks >= 60 && marks < 70)
        printf("Your grade is D.\n");

    else if (marks >= 50 && marks < 60)
        printf("Your grade is E.\n");

    else if (marks > 100)
        printf("Marks must be between \"0-100\" only");

    else
        printf("You have failed.\n");
    return 0;
}