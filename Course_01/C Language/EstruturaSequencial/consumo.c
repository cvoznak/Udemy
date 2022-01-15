#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dist, comb, consumo;

    printf("Distancia percorrida: ");
    scanf("%lf", &dist);
    printf("Combustivel gasto: ");
    scanf("%lf", &comb);

    consumo = dist / comb;

    printf("Consumo medio = %.3lf", consumo);

    return 0;
}
