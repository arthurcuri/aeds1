#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroTermo, razao, decimoTermo;

    //printf("Digite o primeiro termo da PA: ");
    scanf("%d", &razao);

    //printf("Digite a raz�o da PA: ");
    scanf("%d", &primeiroTermo);

    // C�lculo do d�cimo termo da PA: a10 = a1 + (n - 1) * r
    decimoTermo = primeiroTermo + 9 * razao;

    printf("%d\n", decimoTermo);

    return 0;

}
