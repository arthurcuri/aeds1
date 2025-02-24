#include <stdio.h>
#include <stdbool.h>


bool ehPositivo(int numero)
{
    return numero > 0;
}

int main()
{
    int N;

    // printf("Digite a quantidade de n�meros a serem verificados: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        //   printf("Por favor, insira um valor inteiro positivo para N.\n");
        return 1;  // Retorna c�digo de erro
    }


    for (int i = 0; i < N; ++i)
    {
        int numero;


        //printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &numero);

        if (ehPositivo(numero))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}
