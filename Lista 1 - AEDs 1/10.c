#include <stdio.h>
#include <stdlib.h>

int main()
{

    int hora, min, tempo;

    //printf("qual hora");
    scanf("%i",&hora);
    //printf("qual minuto");
    scanf("%i",&min);

    tempo = (hora*60) + min;

    printf("%i",tempo);

    return 0;
}
