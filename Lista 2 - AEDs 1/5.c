#include <stdio.h>
#include <stdlib.h>

/*5. Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
Com isto, espera aumentar sua taxa de ocupação de 50 para 80%. Sendo dado o valor normal da diária, calcular e imprimir:

a) o valor da diária promocional;

b) o valor total arrecadado com 80% de ocupação e diária promocional;

c) o valor total arrecadado com 50% de ocupação e diária normal;

d) a diferença entre estes dois valores.
*/

int main()
{
    float diaria, promo, total80, total50, dif;

    //printf("Qual o valor normal da diaria: \n");
    scanf("%f",&diaria);

    promo = 0.75*diaria;
    total80 = (0.80*75)*promo;
    total50 = 0.50*75*diaria;
    dif = total80 - total50;

    printf("Valor promocional: %.2f\n",promo);
    printf("Promocional com 80%% ocupado: %.2f\n",total80);
    printf("Normal com 50%% ocupado: %.2f\n",total50);
    printf("Diferenca entre os valores: %.2f\n",dif);



    return 0;
}
