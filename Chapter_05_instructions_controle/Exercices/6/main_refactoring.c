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
// void say_hello();

// Main program
int main() {
    int adition(int ,int);

    // Variable Initialization
    int a = 12;
    int b = 23;
    int result = adition(a,b);
    printf("%d\n",result);

    return 0;
}
// Function Definitions
int adition(int a, int b) {
    return a + b;
}