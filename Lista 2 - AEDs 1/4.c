#include <stdio.h>
#include <stdlib.h>


int main() {
    float nota;

    // Solicite ao usu�rio que insira a nota
    printf("Digite a nota: ");
    scanf("%f", &nota);

    // Verifique em qual faixa a nota se encaixa e imprima a mensagem correspondente
    if (nota >= 8 && nota <= 10) {
        printf("Otimo\n");
    } else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    } else if (nota < 5) {
        printf("Insatisfat�rio\n");
    } else {
        printf("Nota fora da faixa v�lida\n");
    }

    return 0;
}
