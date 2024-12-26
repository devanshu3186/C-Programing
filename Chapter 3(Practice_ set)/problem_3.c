// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//                   Income Slab                        Tax
//                   2.5 – 5.0L                         5%
//                   5.0L - 10.0L                       20% 
//                   Above 10.0L                        30%
//Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>
int main()
{
    double tax, income;
    printf("Enter your income: \n");
    scanf("%lf", &income);
    if (income >= 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("You have to pay tax of total %.2lf for you income of %.2lf\n", tax, income);
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("You have to pay tax of total %.2lf for you income of %.2lf\n", tax, income);
    }
    else if (income >= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf("You have to pay tax of total %.2lf for you income of %.2lf\n", tax, income);
    }
    else
    {
        printf("There is no tax for income below 250000, as you income is %.2lf\n", income);
    }
    return 0;
}