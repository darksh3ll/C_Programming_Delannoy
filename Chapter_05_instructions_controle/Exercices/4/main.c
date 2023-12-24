#include <stdio.h>

int main()
{
    int input, i;
 
    printf("Entrez le nombres de lignes: ");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        printf("%c\n", '*');
       
    }

    return 0;
}