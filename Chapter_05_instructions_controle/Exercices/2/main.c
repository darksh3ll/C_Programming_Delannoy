#include <stdio.h>

int main()
{
    int i, n, sum;
    sum = 0;
    i = 1;
    do
    {
        printf("donnez un entier:  ");
        scanf("%d", &n);
        sum += n;
        i++;
    } while (i <= 4);
    printf("Somme = %d", sum);
    return 0;
}