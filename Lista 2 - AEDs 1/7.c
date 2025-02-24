#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa para calcular e imprimir o valor de Y, dado um valor de X:

1, se x <=1

2, se 1 < x <=2

x ao quadrado, se 2 < x <=3

x ao cubo, se x >3

*/

int main()
{
    float x,y;
    //printf("Qual o valor de x: \n");
    scanf("%f",&x);

    if (x <= 1){
        y = 1;
    }

    else if (x <= 2){
        y = 2;
    }
    else if (x <= 3){
        y = pow(x,2);
    }
    else {
        y = pow(x,3);
    }

    printf("%.2f",y);
    return 0;
}
