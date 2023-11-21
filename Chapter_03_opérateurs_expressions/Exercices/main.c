#include <stdio.h>
int main()
{
    int n = 10, p = 4;
    long q = 2;
    float x = 1.75;

    // exercices (a)
    long a = n + q; // => long
    printf("%ld\n",a);

    // exercices (b)
    float b = n + x; // => float
    printf("%f\n",b);

    //exercices (c)
    int c = n % p + q ; // 
    printf("%d",c);


}
