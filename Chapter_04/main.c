#include <stdio.h>

int main(){
    int space = 5;
    int a = 40;
    float b = 1.20;
    printf ("%3.*d\n", space, a) ;

    printf("%3d\n",a);
    printf("%10d\n",a);
    printf("%f\n",b); //1,200000
    printf("%.2f",b); // 1,20
}