#include <stdio.h>
#include <stdlib.h>

/*9. Fazer um programa para:
• ler um símbolo do teclado;
• identificar com a estrutura SWITCH e mostrar as seguintes mensagens, segundo o caso:

    ◦ "SINAL DE MENOR"
    ◦ "SINAL DE MAIOR"
    ◦ "SINAL DE IGUAL"
    ◦ "OUTRO SINAL"
*/

int main()
{
    char sinal;
    //printf("Digite o Sinal: \n");
    scanf(" %c",&sinal);
    switch(sinal){
        case '-':
            printf("SINAL DE MENOR");
        break;
        case '+':
            printf("SINAL DE MAIOR");
        break;
        case '=':
            printf("SINAL DE IGUAL");
        break;
        default:
            printf("OUTRO SINAL");
        break;
    }
    return 0;
}
