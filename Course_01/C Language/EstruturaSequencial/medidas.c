#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, areaq, areatria, areatrap;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaq = pow(a, 2);
    areatria = (a * b) / 2;
    areatrap = ((a + b)*c) / 2;

    printf("AREA DO QUADRADO = %.4lf", areaq);
    printf("%\n AREA DO TRIANGULO = %.4lf", areatria);
    printf("%\n AREA DO TRAPEZIO = %.4lf", areatrap);

    return 0;
}
