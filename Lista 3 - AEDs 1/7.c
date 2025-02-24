#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
unsigned long long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int L;
  //  printf("Digite o número de elementos da série de Fibonacci a serem impressos (excluindo o 0): ");
    scanf("%d", &L);

    if (L < 1) {
     //   printf("Por favor, insira um número positivo maior ou igual a 1.\n");
        return 1; // Encerra o programa com um código de erro.
    }

   // printf("Os primeiros %d números da série de Fibonacci (excluindo o 0) são:\n", L);

    // Imprime os primeiros L números da sequência de Fibonacci, excluindo o 0.
    for (int i = 1; i <= L; i++) {
        printf("%llu ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
