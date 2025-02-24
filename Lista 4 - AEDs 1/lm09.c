#include <stdio.h>

float calcularMediaAprovados() {
    float nota, soma = 0;
    int alunosAprovados = 0;

    //printf("Digite as notas dos alunos (digite uma nota negativa para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        if (nota >= 6) {
            soma += nota;
            alunosAprovados++;
        }
    }

    if (alunosAprovados > 0) {
        return soma / alunosAprovados;
    } else {
        return 0;
    }
}

int main() {
    float mediaAprovados = calcularMediaAprovados();

    printf("%.1f\n", mediaAprovados);

    return 0;
}
