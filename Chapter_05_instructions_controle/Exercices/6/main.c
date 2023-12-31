/*
 * Title: Your Program Title
 * Author: darksh3ll <darksh3ll.js@gmail.com>
 * Created on: 2023-12
 * Description: Programme qui verifie si un nombre est premier
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <stdio.h>
#include <math.h>

// Main program
int main()
{
    // Variable Initialization
    int i = 2;
    int input;
    int input_racine_carre;
    int isPrime = 1;

    printf("Entrez un nombres: ");
    scanf("%d", &input);
    input_racine_carre = sqrt(input);

    for (i; i <= input_racine_carre; i++)
    {

        if ((input % i) == 0)
        {
            isPrime = i;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("Le nombre %d est  premier", input);
    }

    return 0;
}
