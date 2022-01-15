#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n, i, qtd, countR, countS, countC, total;
    char tipo;
    double percC, percR, percS;

    printf("Quantos casos de testes serao digitados? ");
    scanf("%d", &n);

    countC = 0;
    countR = 0;
    countS = 0;


    for (i = 0; i < n ; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaias: ");
        limpar_entrada();
        scanf("%c", &tipo);

        if (tipo == 'c') {
            countC = countC + qtd;
        }
        else if (tipo == 'r') {
            countR = countR + qtd;
        }
        else if (tipo == 's') {
            countS = countS + qtd;
        }
    }

    total = countR + countS + countC;

    percC = ((double) countC / total) * 100;
    percR = ((double) countR / total) * 100;
    percS = ((double) countS / total) * 100;

    printf("RELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", countC);
    printf("Total de ratos: %d\n", countR);
    printf("Total de sapos: %d\n", countS);
    printf("Percentual de coelhos: %.2lf\n", percC);
    printf("Percentual de ratos: %.2lf\n", percR);
    printf("percentual de sapos: %.2lf\n", percS);
    return 0;
}
