// 2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>
int main()
{
    float sub_1, sub_2, sub_3, percentage;
    printf("Enter your marks in all three subjects: \n");
    scanf("%f %f %f", &sub_1, &sub_2, &sub_3);
    percentage = (sub_1 + sub_2 + sub_3) / 300 * 100;
    if (sub_1 < 33 || sub_2 < 33 || sub_3 < 33)
    {
        printf("You failed due to less marks in individual subjects\n");
    }
    // else if ((sub_1+sub_2+sub_3)/300*100 < 40)
    // {
    //     printf("You failed because your overall percentage is less than 40%%.\n");
    // }
    else if (percentage < 40)
    {
        printf("You have failed due to %.2f%% which is less than 40%%\n", percentage);
    }
    else
    {
        printf("You have Passed the exams with %.2f%%, Congratulations!!!\n", percentage);
    }

    return 0;
}