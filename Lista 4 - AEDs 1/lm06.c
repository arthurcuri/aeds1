#include <stdio.h>


double calcular_serie(int N) {
    double S = 1.0;
    double fatorial = 1.0;

    for (int i = 1; i <= N; ++i) {
        fatorial *= i;
        S += 1.0 / fatorial;
    }

    return S;
}

int main() {
    int N;


    //printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);


    if (N < 0) {
        printf("Por favor, insira um valor inteiro e positivo para N.\n");
        return 1;
    }


    double resultado = calcular_serie(N);
    printf("%lf",resultado);

    return 0;
}
