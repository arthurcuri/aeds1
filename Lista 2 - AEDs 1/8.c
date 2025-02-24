#include <stdio.h>
#include <stdlib.h>

/*8. Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH)
e o salário atual do funcionário, calcula e exibe o novo salário:

A = aumento de 8% no salário;

B = aumento de 11% no salário;

C = aumento fixo no salário

(de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for maior que R$ 1000).
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
