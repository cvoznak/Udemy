#include <stdio.h>
#include <stdlib.h>

int main()
{
    double unit,qtd,din,tota l,troco,falta;
    printf("Preco unitario do produto: ");
    scanf("%lf",&unit);
    printf("Quantidade comprada: ");
    scanf("%lf",&qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf",&din);

    total=unit*qtd;

    if (din>=total) {
        troco=din-total;
        printf("TROCO = %.2lf", troco);
    }
    else {
        falta=total-din;
        printf("DINHEIRO INSUFICIENTE, FALTAM %.2lf REAIS", falta);
    }

    return 0;
}
