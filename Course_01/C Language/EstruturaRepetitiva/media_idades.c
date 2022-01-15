#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, count;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    count = 0;

    if (idade > 0) {
        while (idade > 0) {
        count++;
        soma = soma + idade;
        scanf("%d", &idade);
    }

        media = (double) soma / count;

        printf("MEDIA = %.2lf", media);
    }
    else {
        printf("IMPOSSIVEL CALCULAR");
    }
    return 0;
}
