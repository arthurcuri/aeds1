#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,aux,aux2;

    scanf("%i",&a);
    scanf("%i",&b);

    aux = (a+b);

    if (aux>=10){
        aux2 = aux+5;
    }
    if (aux<10) {
        aux2 = aux+7;
    }

    printf("%d",aux2);
    return 0;
}
