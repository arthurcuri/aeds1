#include <stdio.h>

void determinar_conceito(float media) {
    char conceito;

    if (media < 40) {
        conceito = 'F';
    } else if (media < 60) {
        conceito = 'E';
    } else if (media < 70) {
        conceito = 'D';
    } else if (media < 80) {
        conceito = 'C';
    } else if (media < 90) {
        conceito = 'B';
    } else {
        conceito = 'A';
    }

    printf("%c\n", conceito);
}

int main() {
    int N;
    //printf("Digite o número de alunos (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        float media;
        //printf("\nAluno %d:\n", i);
        //printf("Digite a média final: ");
        scanf("%f", &media);

        determinar_conceito(media);
    }

    return 0;
}
