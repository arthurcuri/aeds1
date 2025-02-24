#include <stdio.h>

double calcular_serie(int N) {
    double S = 0.0;

    for (int n = 1; n <= N; ++n) {
        S += (n * n + 1.0) / (n + 3.0);
    }

    return S;
}

int main() {
    int N;


    //printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);


    if (N <= 0) {
        //printf("Por favor, insira um valor inteiro e positivo para N.\n");
        return 1;
    }

    double resultado = calcular_serie(N);
    printf("%lf", resultado);

    return 0;
}
