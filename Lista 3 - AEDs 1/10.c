#include <stdio.h>
#include <stdlib.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBranco = 0;
    int voto;

    //printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: \n");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; // Encerra a votação quando o código for 0
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            default:
                //printf("Código de voto inválido.\n");
        }
    }

    printf("%d\n", candidato1);
    printf("%d\n", candidato2);
    printf("%d\n", candidato3);
    printf("%d\n", candidato4);
    printf("%d\n", votosNulos);
    printf("%d\n", votosBranco);

    return 0;
}






