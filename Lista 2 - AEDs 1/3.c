#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int ano,aux,aux2,atual;
    char sn;

    printf("Escreva o ano que voce nasceu: ");
    scanf("%i",&ano);
    printf("Escreva o ano atual: ");
    scanf("%i",&atual);

    aux = (atual - ano);

    printf("Ja fez aniversario: S/N ");
    scanf("%c",&sn);

   if (sn='s'){
        printf("%i",aux);
    }
    else (sn='n');{
        aux2 = aux - 1;
        printf("%i",aux2);
    }

    if (aux>=18){
        printf("Pode dirigir");
    }
    else (aux<18);{
        printf("Nao pode dirigir");
    }

    return 0;
}
