#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose;
    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);
    if (glicose<=100) {
        printf("Classificacao: normal");
    }
    else if (glicose>140) {
        printf("Classificacao: diabetes");
    }
    else {
        printf("Classificacao: elevado");
    }
    return 0;
}
