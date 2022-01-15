#include <stdio.h>
#include <stdlib.h>

int main()
{
    double min, total;

    printf("Digite a quantidade de minutos: ");
    scanf("%lf", &min);

    if (min<=100) {
        total=50;
    }
    else {
        total=50+((min-100)*2);
    }

    printf("Valor a pagar: %.2lf", total);

    return 0;
}
