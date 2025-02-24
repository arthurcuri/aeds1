#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    // Solicite ao usuário que digite a base e a altura do retângulo
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Calcule o perímetro
    perimetro = 2 * (base + altura);

    // Calcule a área
    area = base * altura;

    // Calcule a diagonal usando a função sqrt para calcular a raiz quadrada
    diagonal = sqrt(base * base + altura * altura);

    // Exiba os resultados
    printf("Perímetro do retângulo: %.2f\n", perimetro);
    printf("Área do retângulo: %.2f\n", area);
    printf("Diagonal do retângulo: %.2f\n", diagonal);

    return 0;
}






