#include <stdio.h>

int main()
{
    int i, n, sum;
    sum = 0;
    i = 1;
    while (i <= 4)
    {
        printf("donnez un entier:  ");
        scanf("%d", &n);
        sum += n;
        i++;
    }
    printf("Somme = %d",sum);
    return 0;

}