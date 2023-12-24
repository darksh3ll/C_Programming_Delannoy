#include <stdio.h>

int main()
{
    int input, i, j;

    printf("Entrez le nombres de lignes: ");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}