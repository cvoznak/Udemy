#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, qtd;
    double valor;
    printf("Codigo do produto comprado: ");
    scanf("%d", &cod);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    if (cod==1) {
        valor=qtd*5;
    }
    else if (cod==2) {
        valor=qtd*3.5;
    }
    else if (cod==3) {
        valor=qtd*4.8;
    }
    else if (cod==4) {
        valor=qtd*8.9;
    }
    else if (cod==5) {
        valor=qtd*7.32;
    }
    printf("Valor a pagar: R$ %.2lf", valor);
    return 0;
}
