#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &i);
    printf("Qual a quantidate de colunas da matriz? ");
    scanf("%d", &j);

    double mat[i][j], vet[i], somaLinha;

    for (int m = 0; m < i; m++) {
        printf("Digite os elementos da %da. linha\n", m + 1);
        for (int n = 0; n < j; n++){
            scanf("%lf", &mat[m][n]);
        }
    }
    printf("VETOR GERADO:\n");
    for (int m = 0; m < i; m++) {
        for (int n = 0; n < j; n++){
            somaLinha += mat[m][n];
        }
        vet[m] = somaLinha;
        somaLinha = 0;
        printf("%.1lf\n", vet[m]);
    }

    return 0;
}
