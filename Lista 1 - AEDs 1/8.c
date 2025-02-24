#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, aux;
    //printf("a: ");
    scanf("%lf",&a);
    //printf("b: ");
    scanf("%lf",&b);

    aux = a;
    a = b;
    b = aux;

    printf("%lf",a);
    printf(" %lf",b);


    return 0;
}
