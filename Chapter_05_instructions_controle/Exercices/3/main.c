#include <stdio.h>


int main()
{
    int i = 1;
<<<<<<< HEAD
    float moyenne = 0;
=======
    float moy = 0;
>>>>>>> 43f8b28ffec24c292bfca9816c0e4bb25cd0269b
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
<<<<<<< HEAD

        moyenne += input;
=======
    
        moy += input;
>>>>>>> 43f8b28ffec24c292bfca9816c0e4bb25cd0269b
        i++;

    } while (input);

    printf("moyenne de c'est %d notes : %.2f", i, moyenne / i);
    return 0;
}