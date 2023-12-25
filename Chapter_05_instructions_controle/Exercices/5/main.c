#include <stdio.h>
#define COUNT 10;
int main()
{
    int i, j;
    printf("%9c",'I');
    for (i = 1; i <= 10; i++)
    {
        
        printf("%4d", i);
    }
    printf("\n");

    for (i = 0; i < 50; i++)
    {
        printf("%c", '-');
    }

    printf("\n");

    for (i = 1; i <= COUNT i++)

    {
        printf("%4d %4c", i, 'I');

        for (j = 1; j <= 10; j++)
        {
            printf("%4d", j * i);
        }
        printf("\n");
    };

    return 0;
}
