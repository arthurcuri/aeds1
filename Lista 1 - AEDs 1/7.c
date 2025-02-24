#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroTermo, razao, quintoTermo;

    //printf("Digite o primeiro termo da PG: ");
    scanf("%d", &razao);

    //printf("Digite a razão da PG: ");
    scanf("%d", &primeiroTermo);

    // Cálculo do quinto termo da PG: an = a1 * r^(n-1)
    quintoTermo = primeiroTermo * (razao * razao * razao * razao);

    printf("%d\n", quintoTermo);

    return 0;
}
