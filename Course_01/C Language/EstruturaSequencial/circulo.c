#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES // for C

#include <math.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio,2);

    printf("AREA = %.3lf", area);
    return 0;
}
