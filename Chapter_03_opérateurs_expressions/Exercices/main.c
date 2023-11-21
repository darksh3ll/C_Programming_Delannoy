#include <stdio.h>
int main()
{
    int n = 10, p = 4;
    long q = 2;
    float x = 1.75;

    // exercices (a)
    long a = n + q; // => long
    printf("%ld\n", a);

    // exercices (b)
    float b = n + x; // => float
    printf("%f\n", b);

    // exercices (c)
    int c = n % p + q; // => long
    printf("%ld\n", c);

    // exercices (d)
    int d = n < p ; // => int
    printf("%d\n", d);

    //exercices(e)
    int e = n >= p;
    printf("%d\n",e); // => int
    return 0;

    //exercices(f)
    long f = n > q;
    printf("%ld\n",f); // => long
    return 0;
}
