// Écrire plus simplement l’instruction suivante :

// z = (a>b ? a : b) + (a <= b ? a : b) ;

//  (SI a est superieur à b ALORS affiche a SINON affiche b) + (SI a inferieur ou egale a b ALORS affiche a SINON affiche b)

#include <stdio.h>

int main()
{
    int a, b, z, c;
    a = 20;
    b = 10;
    z = (a > b ? a : b) + (a <= b ? a : b);
    c = a + b; //Solution
    printf("%d\n", z);
    printf("%d\n", c);
    return 0;
}