#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, menor, maior, inicial, soma;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        menor = x;
        maior = y;
    }
    else {
        menor = y;
        maior = x;
    }
    if (menor % 2 == 0) {
        inicial = menor + 1;
        }
    else {
        inicial = menor + 2;
    }

    soma = 0;

    while (inicial < maior) {
        soma = soma + inicial;
        inicial = inicial + 2;
    }
    printf("SOMA DOS IMPARES = %d", soma);

    return 0;
}
