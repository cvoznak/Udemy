#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, escLinha, escColuna;
        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);

    double mat[n][n], somaPos = 0, matA[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                somaPos += mat[i][j];
            }
        }
    }

    printf("\n");
    printf("SOMA DOS POSITIVOS: %.1lf\n", somaPos);
    printf("\n");

    printf("Escolha uma linha: ");
    scanf("%d", &escLinha);
    printf("LINHA ESCOLHIDA: ");

    for (int j = 0; j < n; j++) {
        printf("%.1lf ", mat[escLinha][j]);
    }
    printf("\n");

    printf("\nEscolha uma coluna: ");
    scanf("%d", &escColuna);
    printf("COLUNA ESCOLHIDA: ");

    for (int i = 0; i < n; i++) {
        printf("%.1lf ", mat[i][escColuna]);
    }
    printf("\n");

    printf("\nDIAGONAL PRINCIPAL: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("%.1lf ", mat[i][j]);
            }
        }
    }

    printf("\n");

    printf("\nMATRIZ ALTERADA:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                matA[i][j] = pow(mat[i][j], 2);
            }
            else {
                matA[i][j] = mat[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1lf  ", matA[i][j]);
        }
        printf("\n");
    }
    return 0;
}
