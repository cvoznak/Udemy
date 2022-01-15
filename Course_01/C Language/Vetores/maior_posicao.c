#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, iMaior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n], maiorValor;

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maiorValor = vet[0];

    for (int i = 0; i < n; i++) {
        if (vet[i] > maiorValor) {
            maiorValor = vet[i];
            iMaior = i + 1;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maiorValor);
    printf("POSICAO DO MAIOR VALOR = %d\n", iMaior);
    return 0;
}
