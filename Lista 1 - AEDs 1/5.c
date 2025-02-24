#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c1, c2, aux;
    float h;

   // printf("Digite o primeiro valor\n");
    scanf("%d",&c1);
   // printf("Digite o segundo valor\n");
    scanf("%d",&c2);
    aux = pow(c1,2)+ pow(c2,2);
    h = sqrt(aux);
    printf("Hipotenusa: %.2f",h);

    return 0;
}
