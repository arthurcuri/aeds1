#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa para ler os coeficientes de uma equa��o do primeiro grau (ax + b = 0),
calcular e escrever a raiz da equa��o.
*/

int main()
{
    int q1, q2;
    float raiz;

    //printf("Quais os coeficientes da equa�ao de primeiro grau: \n");
    scanf("%d %d",&q1,&q2);
    raiz = 0;

    if (q1!=0 && q2!=0){
        raiz = -q2/q1;
    }

    printf("%.2f",raiz);
    return 0;
}
