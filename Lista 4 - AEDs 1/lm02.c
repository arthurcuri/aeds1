#include <stdio.h>

void calcularMediaSalarios() {
    int contador = 0;
    int filhos;
    float salario, totalSalarios = 0;

    while (1) {
        scanf("%f", &salario);
        scanf("%i", &filhos);

        if (salario <= 0) {
            break;
        }

        totalSalarios += salario;
        contador++;
    }

    if (contador > 0) {
        float media = totalSalarios / contador;
        printf("%.2f\n", media);
    } else {
        printf("\nNenhum salario foi inserido!\n");
    }
}

int main() {
    calcularMediaSalarios();

    return 0;
}
