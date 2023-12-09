#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main()
{
    int age = 18;
    printf("%3d",++age);
}
