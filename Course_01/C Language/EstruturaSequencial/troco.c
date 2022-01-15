#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, qtd, recebido, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    troco = recebido - (preco * qtd);

    printf("TROCO = %.2lf", troco);
    return 0;
}
