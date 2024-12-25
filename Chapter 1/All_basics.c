#include <stdio.h>
int main()
{
    int random;
    int a = 10;        // integer datatype
    float b = 10.3;    // float datatype
    char c = 'f';      // character datatype
    printf("%d\n", a); // This is a comment.
    printf("%f\n", b); 
    printf("%c\n", c);

    printf("Enter any integer number, Mr. Devanshu: \n");
    scanf("%d", &random); // This is how we take input in C.
    printf("The value of random is: %d\n", random);

    printf("These are escape\n sequence characters\n");
    printf("These are escape\\n sequence characters\n");
    printf("These are escape\t sequence characters\n");
    printf("These are escape\" sequence characters\n");
    printf("These are escape\' sequence characters\n");
    printf("These are escape\\ sequence characters\n");
    return 0;
    
 
}
/*This is multilines comment,
we can use this to write multiple lines at once*/