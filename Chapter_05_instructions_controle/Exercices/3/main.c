#include <stdio.h>

int main()
{
    int i = 1;
    float moyenne = 0;
    float input;
    do
    {
        printf("note %d :", i);
        scanf("%f", &input);

        if (input < 0)
        {
            i--;
            break;
        }

        moyenne += input;
        i++;

    } while (input);

    printf("moyenne de c'est %d notes : %.2f", i, moyenne / i);
    return 0;
}