#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, countPares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i =0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    countPares = 0;

    printf("\nNUMEROS PARES:\n");

    for (int i =0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            printf(" %d ", vet[i]);
        }
    }
    printf("\n")
    printf("\nQUANTIDADE DE PARES = %d\n", countPares);
    return 0;
}
