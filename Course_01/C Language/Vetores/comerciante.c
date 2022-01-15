#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double precoCompra[n], precoVenda[n], lucro[n], totalCompra, totalVenda, lucroTotal, pLucro[n];
    int count10, count1020, count20;

    for (int i = 0; i < n; i++) {
        printf("Produto %d: \n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(&nome[i], 50, stdin);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
        lucro[i] = precoVenda[i] - precoCompra[i];
        pLucro[i] = (lucro[i] / precoCompra[i]) * 100;
    }

    count10 = 0;
    count1020 = 0;
    count20 = 0;
    totalCompra = 0;
    totalVenda = 0;

    for (int i = 0; i < n; i++) {
        if (pLucro[i] < 10) {
            count10++;
        }
        else if (pLucro[i] > 20) {
            count20++;
        }
        else {
            count1020++;
        }
        totalCompra += precoCompra[i];
        totalVenda += precoVenda[i];
    }

    lucroTotal = totalVenda - totalCompra;

    printf("RELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", count10);
    printf("Lucro entre 10%% e 20%%: %d\n", count1020);
    printf("Lucro acima de 20%%: %d\n", count20);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}
