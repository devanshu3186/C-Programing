#include<stdio.h>
#include<math.h>
int square(double);
int square(double a){
    double c=pow(a,2);
    printf("The area of square of side %.0lf is: %.0lf\n",a,c);\
    return c;
}
int main()
{
    double b;
    printf("Enter the side of square: ");
    scanf("%lf",&b);
    square(b);
    // printf("The Area of sqaure of side %.0lf is: %.0lf\n",a,pow(a,2));

    return 0;
}