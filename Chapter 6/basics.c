#include <stdio.h>
int main()
{
    int i = 10;  // Interger "i".
    int *j = &i; // declare a variable j of type int pointer. (type integer pointer)
                 // pointer "j" stores address of "i" in it.

    printf("The value of i is: %d\n", i);    // print value of i.
    printf("The address of i is %p\n", &i);  // print address of i using address operator "&".
    printf("The address of i is: %p\n", j);  // print address of i which pointer j has stored inside itself.
    printf("The address of j is: %p\n", &j); // print address of pointer j using address operator "&".

    printf("The value at address of j is: %d\n", *j);    // value at address operator "*".
    printf("The value at address of i is: %d\n", *(&i)); //  value at address operator "*".
    printf("The value at address of j is: %p\n", *(&j)); //  value at address operator "*".

    return 0;
}