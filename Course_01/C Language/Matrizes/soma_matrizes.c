#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &n);

    int matA[m][n], matB[m][n], matC[m][n];

    printf("Digite os valores da matriz A:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Digite os valores da matriz B:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
