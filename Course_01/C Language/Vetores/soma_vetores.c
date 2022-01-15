#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    double a[n], b[n], c[n];

    printf("Digite os valores dos vetor A: \n");

    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    printf("Digite os valores dos vetor B: \n");

    for (int i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("\nVETOR RESULTANTE: \n");
    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", c[i]);
    }
    return 0;
}
