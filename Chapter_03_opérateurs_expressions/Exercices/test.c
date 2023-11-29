#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main() {
<<<<<<< HEAD
    const char* message = "Hello, world!\n";
    syscall(SYS_write, STDOUT_FILENO, message, 13);
=======
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Vous avez entré %d et %d\n", a, b);
>>>>>>> master
    return 0;
}
