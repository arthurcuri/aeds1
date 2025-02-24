#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float p, a;

    //printf("Escreva o raio: \n");
    scanf("%i",&r);

    p = 2*3.14*r;
    a = 3.14*pow(r,2);

    printf("Perimetro: %.2f\n",p);
    printf("Area: %.2f\n",a);

    return 0;
}
