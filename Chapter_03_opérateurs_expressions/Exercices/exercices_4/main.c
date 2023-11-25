#include <stdio.h>
int main()
{
    int n = 10, p = 5, q = 10, r;
    r = n == (p = q);
    printf("A : n = %d p = %d q = %d r = %d\n", n, p, q, r);
    n = p = q = 5;
    n += p += q;
    printf("b : n = %d p = %d q = %d r = %d", n, p, q, r);
    q = n < p ? n++ : p++ ;
    printf("C : n = %d p = %d q = %d r = %d", n, p, q, r);
    q = n > p ? n++ : p++ ;
    printf("C : n = %d p = %d q = %d r = %d", n, p, q, r);

}