#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n], countMenores;
    double alturas [n], alturaMedia, porcMenores, somaAlturas;

    for (i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i+1);

        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(nomes[i], 50, stdin);
        strtok(nomes, "\n");

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    somaAlturas = 0;
    countMenores = 0;

    for (i = 0; i < n; i++) {

        somaAlturas = somaAlturas + alturas[i];

        if (idades[i] < 16) {
            countMenores++;
        }
    }

    alturaMedia = somaAlturas / n;
    porcMenores = countMenores * 100 / n;

    printf("Altura media: %.2lf m\n", alturaMedia);
    printf("Pessoas com menos de 16 anos: %.2lf%%\n", porcMenores);
    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
