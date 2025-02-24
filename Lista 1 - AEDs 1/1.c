#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, c, d, u, inv, aux, aux2;

    //printf("Escreva o numero de 3 digitos \n");
    scanf("%i",&num);
    c = num%10;
    aux = num/10;
    d = aux%10;
    aux2 = aux/10;
    u = aux2%10;

    inv = (c*100)+(d*10)+u*1;
    printf("%i",inv);
    return 0;
}
