#include <stdio.h>


void verificar_tipo_triangulo(float x, float y, float z);


int main() {
    float x, y, z;


    while (1) {
        scanf("%f", &x);

        if (x < 0) {
            break;
        }

        scanf("%f", &y);

        scanf("%f", &z);

        verificar_tipo_triangulo(x, y, z);
    }

    return 0;
}


void verificar_tipo_triangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (x == y || x == z || y == z) {
            printf("TRIANGULO ISOSCELES\n");
        } else {
            printf("TRIANGULO ESCALENO\n");
        }
    } else {
        printf("NÃO TRIANGULO\n");
    }
}
