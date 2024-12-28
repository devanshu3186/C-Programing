// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2.

#include <stdio.h>
float force_of_attaction(float mass);
float force_of_attaction(float mass)
{
    float force = mass * 9.8;
    printf("The force of attraction on a body of mass %.1f kg is: %.2f N", mass,force);
    return force;
}
int main()
{
    float mass;
    printf("Enter the mass of body in kilograms: ");
    scanf("%f",&mass);
    force_of_attaction(mass);
    return 0;
}