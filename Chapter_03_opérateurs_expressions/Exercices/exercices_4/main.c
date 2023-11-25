#include <stdio.h>
int main()
{
    int n = 10, p = 5, q = 10, r;
    r = n == (p = q);
    // r = 10 == ( 5 = 10)  
    printf("A : n = %d p = %d q = %d r = %d\n", n, p, q, r);
    //Resultat: n = 10, p = 10, q = 10, r = 1
    n = p = q = 5;
    // n = 5, p = 5, q = 5
    n += p += q;
    // n = 15 p = 10 q = 5
    printf("A : n = %d p = %d q = %d r = %d", n, p, q, r);
}