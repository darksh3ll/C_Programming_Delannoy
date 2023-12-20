
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
    int c = 0;
    for (int i = 0; i <- 10; i++)
    {
        printf("%*.c\n", ++c, '*');
    };

    for (int j = c; j >- 0; j--)
    {
        printf("%*.c\n", --c, '*');
    }

}
