#include <stdio.h>
#include <stdlib.h>

// Fun��o recursiva para calcular o n-�simo n�mero de Fibonacci
unsigned long long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int L;
  //  printf("Digite o n�mero de elementos da s�rie de Fibonacci a serem impressos (excluindo o 0): ");
    scanf("%d", &L);

    if (L < 1) {
     //   printf("Por favor, insira um n�mero positivo maior ou igual a 1.\n");
        return 1; // Encerra o programa com um c�digo de erro.
    }

   // printf("Os primeiros %d n�meros da s�rie de Fibonacci (excluindo o 0) s�o:\n", L);

    // Imprime os primeiros L n�meros da sequ�ncia de Fibonacci, excluindo o 0.
    for (int i = 1; i <= L; i++) {
        printf("%llu ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
