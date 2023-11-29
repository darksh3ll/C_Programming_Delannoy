#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Vous avez entré %d et %d\n", a, b);
    return 0;
}
