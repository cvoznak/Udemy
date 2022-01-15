#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, countin, countout, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    countin = 0;
    countout = 0;

    for (i = 0 ; i < n ; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if (x >= 10 && x <= 20) {
            countin++;
        }
        else {
            countout++;
        };
    }
    printf("%d Dentro\n", countin);
    printf("%d Fora\n", countout);
    return 0;
}
