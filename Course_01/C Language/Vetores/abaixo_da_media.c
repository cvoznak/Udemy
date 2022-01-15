#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos elemantos vai ter o vetor? ");
    scanf("%d", &n);

    double vet[n], soma, media;

    for (int i = 0; i < n; i++) {
        printf("Digite um elemento: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;

    for (int i = 0; i < n; i++) {
        soma = soma + vet[i];
    }

    media = soma / n;

    printf("MEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA: \n");

    for (int i = 0; i < n; i++) {
        if (media > vet[i]) {
            printf("%.1lf\n", vet[i]);
        }
    }
    return 0;
}
