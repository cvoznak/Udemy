#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double soma, media, vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n");
    printf("VALORES = ");

    for (int i = 0; i < n; i++) {
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }
    media = soma / n;

    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", media);

    return 0;
}
