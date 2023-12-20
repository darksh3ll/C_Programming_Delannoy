#include <stdio.h>
int ma_fonction()
{   
    return 2;
}


int main()
{
    int a = 12;
    int b = 10;
    char c = '1';
    int toto = ma_fonction();
    printf("%d",toto++);
    // printf("entrez deux chiffre et un charactére : ");
    // int compte = scanf("%d %d %c",&a, &b, &c);
    // printf("%d",compte);
    // printf("a = %d b = %d c = %c" ,a,b,c);
    return 0;
}