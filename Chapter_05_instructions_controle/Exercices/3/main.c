#include <stdio.h>

int main()
{
    int i = 1;
    float moy = 0;
    float n;
    do
    {
        printf("note %d :", i);
        scanf("%f", &n);

        if (n < 0)
        {
            i--;
            break;
        }
        moy += n;
        i++;

    } while (n);

    printf("moyenne de c'est %d notes : %.2f", i, moy / i);
    return 0;
}