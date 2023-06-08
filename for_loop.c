/* Un ciclo for requiere de una expresión inicial, una condición que indica cuando se romperá o no el ciclo, 
y un contador que indique como debe avanzar el ciclo */

#include <stdio.h>
int main(void)
{
    int n, numeroTriangular;

    printf("TABLA DE NÚMEROS RECTANGULARES\n\n");
    printf("n        Sum de 1 a n\n");
    printf("----    -----------\n");

    numeroTriangular = 0;

    for (n = 1; n <= 10; ++n)
    {
        numeroTriangular += n;
        printf("%2i          %2i\n", n, numeroTriangular);
    }
    return 0;
}