// 3. A do while loop is executed: 
// a. At least once. 
// b. At least twice. 
// c. At most once. 

// Option A is correact.

#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    }//while (i <= 10);
    while (0);
    
    return 0;
}