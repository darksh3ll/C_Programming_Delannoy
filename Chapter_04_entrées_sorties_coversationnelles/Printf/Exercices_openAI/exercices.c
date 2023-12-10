
/*
Exercice 1 : Utilisation de Gabarits Fixes

Objectif : Écrivez un programme qui affiche le nombre 123.456 en utilisant différents gabarits de largeur avec une précision fixe
de deux chiffres après la virgule.

Instructions :
    Utilisez printf pour afficher le nombre avec un gabarit de largeur de 10.
    Utilisez printf pour afficher le même nombre avec un gabarit de largeur de 15.
    Dans les deux cas, la précision devrait être de deux chiffres après la virgule.

*/

#include <stdio.h>

int main()
{
    float a = 1.2345;
    float b = 123.456;
    printf("%.2f\n",b);
    printf("%.2f",a);
    return 0;
}
