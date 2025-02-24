#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void gravarSerie() {
    FILE *arquivo = fopen("serie.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    int valor = 5;
    for (int i = 0; i < 1000; i++) {
        fprintf(arquivo, "%d\n", valor);
        valor += 3;
    }

    fclose(arquivo);
    printf("Valores da série gravados no arquivo.\n");
}

void separarParesImpares() {
    FILE *arquivo = fopen("serie.txt", "r");
    FILE *pares = fopen("pares.txt", "w");
    FILE *impares = fopen("impares.txt", "w");

    if (arquivo == NULL || pares == NULL || impares == NULL) {
        printf("Erro ao abrir os arquivos.");
        return;
    }

    int valor;
    while (fscanf(arquivo, "%d", &valor) != EOF) {
        if (valor % 2 == 0) {
            fprintf(pares, "%d\n", valor);
        } else {
            fprintf(impares, "%d\n", valor);
        }
    }

    fclose(arquivo);
    fclose(pares);
    fclose(impares);

    printf("Valores pares e impares separados nos arquivos.\n");
}

void armazenarPrimos() {
    FILE *arquivo = fopen("serie.txt", "r");
    FILE *primos = fopen("primos.txt", "w");

    if (arquivo == NULL || primos == NULL) {
        printf("Erro ao abrir os arquivos.");
        return;
    }

    int valor;
    while (fscanf(arquivo, "%d", &valor) != EOF) {
        if (ehPrimo(valor)) {
            fprintf(primos, "%d\n", valor);
        }
    }

    fclose(arquivo);
    fclose(primos);

    printf("Valores primos armazenados no arquivo.\n");
}

void verificarValorNoArquivo(int valor) {
    FILE *arquivo = fopen("serie.txt", "r");
    FILE *resultado = fopen("resultados.txt", "a");

    if (arquivo == NULL || resultado == NULL) {
        printf("Erro ao abrir os arquivos.");
        return;
    }

    int pos = 0;
    int encontrado = 0;
    int valorAnterior = -1;
    int valorPosterior = -1;

    int num;
    while (fscanf(arquivo, "%d", &num) != EOF) {
        pos++;
        if (num == valor) {
            encontrado = 1;
            break;
        }
        if (num < valor) {
            valorAnterior = num;
        } else {
            valorPosterior = num;
            break;
        }
    }

    if (encontrado) {
        fprintf(resultado, "O valor %d esta no arquivo na posicao %d.\n", valor, pos);
    } else {
        if (valorAnterior != -1) {
            fprintf(resultado, "O valor %d nao esta no arquivo, valores mais proximos: %d e %d.\n", valor, valorAnterior, valorPosterior);
        } else {
            fprintf(resultado, "O valor %d nao esta no arquivo, valor mais proximo: %d.\n", valor, valorPosterior);
        }
    }

    fclose(arquivo);
    fclose(resultado);
}

int main() {
    int escolha;
    int valor;

    while (1) {
        printf("Menu:\n");
        printf("1. Gravar os 1000 primeiros valores da serie\n");
        printf("2. Separar pares e impares\n");
        printf("3. Armazenar apenas os primos\n");
        printf("4. Verificar valor no arquivo\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                gravarSerie();
                break;
            case 2:
                separarParesImpares();
                break;
            case 3:
                armazenarPrimos();
                break;
            case 4:
                printf("Digite o valor a ser verificado: ");
                scanf("%d", &valor);
                verificarValorNoArquivo(valor);
                break;
            case 5:
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
