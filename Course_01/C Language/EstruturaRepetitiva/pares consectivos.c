#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 2 == 0) {
            soma = 0;
            for (i = 0; i <= 4; i++) {
                soma = soma + (n + (i * 2));
            }
        }
        else {
            soma = 0;
            for (i = 0; i <= 4; i++) {
                soma = soma + (n + 1 + (i * 2));
        }
        }
        printf("SOMA = %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
    }
    return 0;
}
