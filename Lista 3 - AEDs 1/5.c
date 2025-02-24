#include <stdio.h>
#include <stdlib.h>


int main() {
    int totalHabitantes = 0;
    double somaSalario = 0.0;
    int somaFilhos = 0;
    double maiorSalario = 0.0;
    int habitantesAte100 = 0;

    //printf("Informe os dados dos habitantes. Digite um salário negativo para encerrar.\n");

    while (1) {
        double salario;
        int numFilhos;

       // printf("Salário: ");
        scanf("%lf", &salario);

        if (salario < 0) {
            break; // Encerra o loop se o salário for negativo.
        }

       // printf("Número de filhos: ");
        scanf("%d", &numFilhos);

        totalHabitantes++;
        somaSalario += salario;
        somaFilhos += numFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            habitantesAte100++;
        }
    }

    if (totalHabitantes > 0) {
        double mediaSalario = somaSalario / totalHabitantes;
        double mediaFilhos = (double)somaFilhos / totalHabitantes;
        double percentualAte100 = (double)habitantesAte100 / totalHabitantes * 100.0;

     //   printf("\nEstatísticas da pesquisa:\n");
        printf("%.2lf\n", mediaSalario);
        printf("%d\n", mediaFilhos);
        printf("%.2lf\n", maiorSalario);
        printf("%.2lf\n", percentualAte100);
    } else {
       // printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
