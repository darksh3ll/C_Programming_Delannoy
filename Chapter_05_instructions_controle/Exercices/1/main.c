#include <stdio.h>

int main()
{
    int i, input, sum;
    sum = 0;
    i = 1;
    while (i <= 4)
    {
        printf("donnez un entier:  ");
        scanf("%d", &input);
        sum += input;
        i++;
    }
    printf("Somme = %d",sum);
    return 0;

}