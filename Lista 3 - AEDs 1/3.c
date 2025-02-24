#include <stdio.h>
#include <stdlib.h>

int main()
{

int numero, i, divisivel3e9 = 0, divisivel2 = 0, divisivel5 = 0;

for(i = 0; i < 10; i++)
{
    scanf("%i", &numero);

    if (numero % 9 == 0 && numero % 3 == 0)
    {
        if (numero % 5 == 0)
        {
           if (numero % 2 == 0)
           {
                divisivel2++;
                divisivel5++;
                divisivel3e9++;
           }

           else
           {
            divisivel5++;
            divisivel3e9++;
           }
        }

        else if (numero % 2 == 0)
        {
            divisivel2++;
            divisivel3e9++;
        }

        else
        {
            divisivel3e9++;
        }

    }

    else if (numero % 5 == 0)
    {
        if (numero % 2 == 0)
        {
            divisivel2++;
            divisivel5++;
        }

        else
        {
            divisivel5++;
        }

    }

    else if (numero % 2 == 0)
    {
        divisivel2++;
    }

    else
    {
        printf("Numero nao e divisivel pelos valores\n");
    }

}

printf("%i Numeros sao divisiveis por 3 e por 9 \n%i Numeros sao divisiveis por 2 \n%i Numeros sao divisiveis por 5", divisivel3e9, divisivel2, divisivel5);

return 0;
}
