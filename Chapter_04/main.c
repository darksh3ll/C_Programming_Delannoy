#include <stdio.h>

int main() {
    int n, p;
    char c;

    printf("Entrez deux nombres : ");
    scanf("%d%d", &n, &p);
    printf("n = %d, p = %d\n", n, p);

    printf("Entrez un caractère et un nombre : ");
    scanf(" %c%d", &c, &n); // Notez l'espace avant %c
    printf("c = %c, n = %d\n", c, n);

    return 0;
}
