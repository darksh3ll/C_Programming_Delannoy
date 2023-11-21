#include <stdio.h>
// condition1 ? (condition2 ? expression1 : expression2) : expression3;
// n étant de type int, écrire une expression qui prend la valeur : -1 si n est négatif,
// 0 si n est nul,
// 1 si n est positif.
int main()
{
    int n = -10;
    int r = (n ? (n > 0 ? 1 : -1) : 0);
    printf("%d", r);
    return 0;
}