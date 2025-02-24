#include <stdio.h>

char determinar_categoria(int idade) {
    char categoria;

    if (idade >= 5 && idade <= 7) {
        categoria = 'F';
    } else if (idade >= 8 && idade <= 10) {
        categoria = 'E';
    } else if (idade >= 11 && idade <= 13) {
        categoria = 'D';
    } else if (idade >= 14 && idade <= 15) {
        categoria = 'C';
    } else if (idade >= 16 && idade <= 17) {
        categoria = 'B';
    } else {
        categoria = 'A';
    }

    return categoria;
}

int main() {
    int quantidade_nadadores;

    //printf("Digite a quantidade de nadadores: ");
    scanf("%d", &quantidade_nadadores);

    for (int i = 0; i < quantidade_nadadores; ++i) {
        int idade;

        //printf("Digite a idade do nadador %d: ", i + 1);
        scanf("%d", &idade);

        char categoria = determinar_categoria(idade);
        printf("%c\n", categoria);
    }

    return 0;
}
