#include <stdio.h>
#include <stdlib.h>

/*8. Construa um programa que l� uma op��o conforme abaixo (usar estrutura SWITCH)
e o sal�rio atual do funcion�rio, calcula e exibe o novo sal�rio:

A = aumento de 8% no sal�rio;

B = aumento de 11% no sal�rio;

C = aumento fixo no sal�rio

(de R$ 350,00 se o sal�rio atual for at� R$ 1000 e de R$ 200,00 se o sal�rio atual for maior que R$ 1000).
*/

int main()
{
    float salario, sal8, sal11, fixo;
    char carac;
    //printf("A,B ou C: ");
    scanf(" %c", &carac);
    //printf("Qual o seu salario:\n");
    scanf("%f",&salario);

    switch (carac){
        case 'A':
        case 'a':
            sal8 = (0.08*salario) + salario;
            printf("%.2f",sal8);
            break;
        case 'B':
        case 'b':
            sal11 = (0.11*salario) + salario;
            printf("%.2f",sal11);
            break;
        case 'C':
        case 'c':
            if (salario <= 1000){
                fixo = salario + 350;
                printf("%.2f",fixo);
            }
            else{
                fixo = salario + 200;
                printf("%.2f",fixo);
            }
            break;
        default:
              //printf("numero invalido");
            break;
    }

    return 1;
}
