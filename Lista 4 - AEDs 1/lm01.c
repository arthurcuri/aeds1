#include <stdio.h>

void calcular_media(float nota1, float nota2, float nota3, char tipo_media) {
    float media;

    if (tipo_media == 'A') {
        media = (nota1 + nota2 + nota3) / 3;
        printf("%.2f\n", media);
    } else if (tipo_media == 'P') {
        media = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
        printf("%.2f\n", media);
    } else {
        // ...
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        float nota1, nota2, nota3;
        char tipo_media;

        scanf("%f", &nota1);
        scanf("%f", &nota2);
        scanf("%f", &nota3);
        scanf(" %c", &tipo_media);

        calcular_media(nota1, nota2, nota3, tipo_media);
    }

    return 0;
}
