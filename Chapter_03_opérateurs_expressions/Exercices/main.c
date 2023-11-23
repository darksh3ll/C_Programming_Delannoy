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
    int d = n < p; // => int
    printf("%d\n", d);

    // exercices(e)
    int e = n >= p;
    printf("%d\n", e); // => int
    return 0;

    // exercices(f)
    long f = n > q;
    printf("%ld\n", f); // => long (1)

    // exercices(g)
    int g = q + 3 * (n > p); // => 5 * 1 long (5)

    // exercices(h)
    int h = q && n; // => long (0)

    // exercices(i)
    int g = (q - 2) && (n - 10); // => long => 0 && 0 (0)

    // exercices(j)
    int j = x * (q == 2); // => float =>  x*1 => 17,75 * 1 = (1.75)

    // exercices(k)
    int k = x * (q = 5); // float * 0 (1,75)
    return 0;
}
