#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroTermo, razao, quintoTermo;

    //printf("Digite o primeiro termo da PG: ");
    scanf("%d", &razao);

    //printf("Digite a raz�o da PG: ");
    scanf("%d", &primeiroTermo);

    // C�lculo do quinto termo da PG: an = a1 * r^(n-1)
    quintoTermo = primeiroTermo * (razao * razao * razao * razao);

    printf("%d\n", quintoTermo);

    return 0;
}
