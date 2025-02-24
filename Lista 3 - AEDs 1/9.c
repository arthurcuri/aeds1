#include <stdio.h>
#include <stdlib.h>

int main() {
    float precoCompra, precoVenda;
    float lucro;
    float totalCompra = 0, totalVenda = 0, lucroTotal = 0;
    int mercadoriasLucroMenor10 = 0, mercadoriasLucroEntre10E20 = 0, mercadoriasLucroMaior20 = 0;

    while (1) {
       // printf("Digite o preço de compra (ou 0 para encerrar): ");
        scanf("%f", &precoCompra);

        if (precoCompra == 0) {
            break; // Encerra a entrada quando o preço de compra for 0
        }

        //printf("Digite o preço de venda: ");
        scanf("%f", &precoVenda);

        // Calcula o lucro para a mercadoria atual
        lucro = (precoVenda - precoCompra) / precoCompra * 100;

        // Atualiza os totais
        totalCompra += precoCompra;
        totalVenda += precoVenda;
        lucroTotal += (precoVenda - precoCompra);

        // Classifica o lucro da mercadoria atual
        if (lucro < 10) {
            mercadoriasLucroMenor10++;
        } else if (lucro >= 10 && lucro <= 20) {
            mercadoriasLucroEntre10E20++;
        } else {
            mercadoriasLucroMaior20++;
        }
    }

    // Exibe os resultados
    printf("%d\n", mercadoriasLucroMenor10);
    printf("%d\n", mercadoriasLucroEntre10E20);
    printf("%d\n", mercadoriasLucroMaior20);
    printf("%.2f\n", totalCompra);
    printf("%.2f\n", totalVenda);
    printf("%.2f\n", lucroTotal);

    return 0;
}
