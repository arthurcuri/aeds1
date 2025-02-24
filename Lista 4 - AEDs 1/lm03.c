#include <stdio.h>

int compararNumeros(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numConjuntos;
    int conjuntos[100][3];
    scanf("%i", &numConjuntos);

    for (int i = 0; i < numConjuntos; i++) {
        scanf("%i %i %i", &conjuntos[i][0], &conjuntos[i][1], &conjuntos[i][2]);
    }

    for (int i = 0; i < numConjuntos; i++) {
        qsort(conjuntos[i], 3, sizeof(int), compararNumeros);

        printf("%d %d %d\n", conjuntos[i][0], conjuntos[i][1], conjuntos[i][2]);
    }

    return 0;
}