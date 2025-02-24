#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    // Solicite ao usu�rio que digite a base e a altura do ret�ngulo
    printf("Digite a base do ret�ngulo: ");
    scanf("%f", &base);

    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);

    // Calcule o per�metro
    perimetro = 2 * (base + altura);

    // Calcule a �rea
    area = base * altura;

    // Calcule a diagonal usando a fun��o sqrt para calcular a raiz quadrada
    diagonal = sqrt(base * base + altura * altura);

    // Exiba os resultados
    printf("Per�metro do ret�ngulo: %.2f\n", perimetro);
    printf("�rea do ret�ngulo: %.2f\n", area);
    printf("Diagonal do ret�ngulo: %.2f\n", diagonal);

    return 0;
}






