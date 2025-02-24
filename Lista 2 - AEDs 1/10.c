#include <stdio.h>
#include <stdlib.h>

int main() {
    int velocidadeMaxima, velocidadeMotorista;

    //printf("Digite a velocidade máxima permitida (em km/h): ");
    scanf("%d", &velocidadeMaxima);

    //printf("Digite a velocidade do motorista (em km/h): ");
    scanf("%d", &velocidadeMotorista);

    int diferenca = velocidadeMotorista - velocidadeMaxima;
    int multa;

    if (diferenca <= 10) {
        multa = 50;
    } else if (diferenca <= 30) {
        multa = 100;
    } else {
        multa = 200;
    }

    if (diferenca > 0) {
        printf("Multa de %d reais\n", multa);
    } else {
        printf("Motorista respeitou a lei\n");
    }

    return 0;
}



