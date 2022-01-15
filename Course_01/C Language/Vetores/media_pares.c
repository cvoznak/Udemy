#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int a[n], countPares, somaPares;
    double mediaPares;

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }
    countPares = 0;
    somaPares = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            countPares++;
            somaPares+=a[i];
        }
    }

    if (countPares == 0) {
        printf("NENHUM NUMERO PAR");
    }
    else {
        mediaPares = (double) somaPares / countPares;
        printf("MEDIA DOS PARES = %.1lf", mediaPares);
    }



    return 0;
}
