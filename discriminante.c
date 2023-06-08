#include <stdio.h>
#include <math.h>

int main (void)
{
    double a, b, c, discriminante, raiz1, raiz2, LIMIT=1e-6;
    printf("Ingresa los coeficientes de ax^2+bx+c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminante = b*b-4.0*a*c;
    printf("discriminant = %lf\n", discriminante);
    if (discriminante > LIMIT){
        raiz1 =(-b+sqrt(discriminante))/2.0/a;
        raiz2 =(-b-sqrt(discriminante))/2.0/a;
        printf("raíz 1 = %lf, raíz 2 = %lf\n", raiz1,raiz2);
    }
    else if (fabs(discriminante)<= LIMIT)
    {
        raiz1 = -b/2.0/a;
        raiz2 = 0.0;
        printf("");
    }
}//main

