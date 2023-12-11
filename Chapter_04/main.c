#include <stdio.h>

int main() {
    int a;
    char c;
    printf("Entrez deux nombres séparés par un espace : ");
    scanf("%d %c", &a, &c);
    printf("Les nombres entrés sont : %d et %c\n", a, c);
    return 0;
}