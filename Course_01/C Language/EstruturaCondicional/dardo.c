#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d1,d2,d3,maior;
    printf("Digite as tres distancias: %\n");
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%lf", &d3);
    maior=d1;
    if (maior<d2) {
        maior=d2;
    }
    else if (maior<d3) {
        maior=d3;
    }
    printf("Maior distancia = %.2lf", maior);
    return 0;
}
