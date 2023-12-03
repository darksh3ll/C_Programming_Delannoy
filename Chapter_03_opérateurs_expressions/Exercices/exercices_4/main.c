#include <stdio.h>

// Quels résultats fournit le programme suivant ?

int main()
{
    int n = 10, p = 5, q = 10, r;
    r = n == (p = q);

    /*
        SOLUTION :
            r = 10 == (10)
            n = 10
            p = 10
            q = 10
            r = 1
    */
    printf("A : n = %d p = %d q = %d r = %d\n", n, p, q, r);

    n = p = q = 5;
    /*
        SOLUTION:
         n = 5
         p = 5
         q = 5
         r = 1
    */

    n += p += q;
    /*
       SOLUTION:
        n = 15
        p = 10
        q = 5
        r = 1
   */

    printf("b : n = %d p = %d q = %d r = %d\n", n, p, q, r);
    q = n < p ? n++ : p++;
    /*
    SOLUTION:
     n = 15
     p = 11
     q = 10
     r = 1
*/
    printf("C : n = %d p = %d q = %d r = %d\n", n, p, q, r);

    q = n > p ? n++ : p++;
    /*
    SOLUTION:
    n = 16
    p = 11
    q = 15
    r = 1
    */
    printf("C : n = %d p = %d q = %d r = %d", n, p, q, r);
}