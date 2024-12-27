#include <stdio.h>
int main()
{
    int i = 1;
    for (;;)
    {
        while (i <= 10)
        {
            if (i == 4)
            {
                i++;
                continue;
            }
            else if (i == 8)
            {
                break;
            }
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}