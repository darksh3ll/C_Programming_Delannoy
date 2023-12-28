/*
 * Title: Your Program Title
 * Author: darksh3ll <darksh3ll.js@gmail.com>
 * Created on: 2023-12
<<<<<<< HEAD
 * Description: Brief description of what the program does.

=======
 * Description: Programme qui verifie si un nombre est premier
 *
>>>>>>> 42932d2a5816a59c6bd634a2778bcc6bab5213a9
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <stdio.h>
#include <math.h>

// Function Declarations
void exampleFunction();

// Main program
int main()
{
    // Variable Initialization
<<<<<<< HEAD
    double num = 29.0; // Remplacez par le nombre de votre choix
    double racineCarree = sqrt(num);

    printf("La racine carrée de %.2f est %.2f\n", num, racineCarree);
=======
    int i = 2;
    int input;
    int input_racine_carre;
    int temp = 1;

    printf("Entrez un nombres: ");
    scanf("%d", &input);
    input_racine_carre = sqrt(input);
    printf("iteration de la boucle %d\n", input_racine_carre);

    for (i; i <= input_racine_carre; i++)
    {

        if ((input % i) == 0)
        {
            temp = i;
            break;
        }
    }
    if (temp == 1)
    {
        printf("Le nombre %d est  premier", input);
    }

>>>>>>> 42932d2a5816a59c6bd634a2778bcc6bab5213a9
    return 0;
}
// Function Definitions
void exampleFunction()
{
<<<<<<< HEAD
    // Function code
}
=======
    printf("hello");
}

>>>>>>> 42932d2a5816a59c6bd634a2778bcc6bab5213a9
