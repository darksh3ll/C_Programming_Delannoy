#include <stdio.h>
int main()
{
    int n = 10, p = 5, q = 10, r = 1;
    n += p += ++r;	
    printf("n = %d\n", n);
    printf("p = %d\n", p);
    // printf("q = %d\n", q);
    printf("r = %d\n", r);
    return 0;

    return 0;
}