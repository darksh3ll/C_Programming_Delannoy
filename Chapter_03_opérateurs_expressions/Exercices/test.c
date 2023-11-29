#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main() {
    const char* message = "Hello, world!\n";
    syscall(SYS_write, STDOUT_FILENO, message, 13);
    return 0;
}
