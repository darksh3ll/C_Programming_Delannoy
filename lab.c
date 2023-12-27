/*
 * Title: Your Program Title
 * Author: darksh3ll <darksh3ll.js@gmail.com>
 * Created on: 2023-12
 * Description: Brief description of what the program does.

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <stdio.h>

// Function Declarations
void exampleFunction();

// Main program
int main()
{
    // Variable Initialization
    int a = 73;
    int temp = 1;

    for (int i = 2; i <= 7; i++)
    {
        if (a % i == 0)
        {
            temp = i;
        }
    }

    if (temp == 1)
    {
        printf("est  premier");
    }

    return 0;
}
// Function Definitions
void exampleFunction()
{
    // Function code
}