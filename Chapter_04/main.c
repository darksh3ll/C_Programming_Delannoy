#include <stdio.h>

int main(){
    int a = 40;
    int precision = 2;
    int space = 0;
    float b = 1.20;
    float c = 5.12;
    printf("%3d\n",a);//   40
    printf("%10d\n",a);//          40
    printf("%f\n",b); //1,200000
    printf("%.2f\n",b); // 1,20
    printf("%f\n",c);
    printf("%.*f\n",precision,c);
    printf("%*d",space,a);

}