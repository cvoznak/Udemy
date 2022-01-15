#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n], negCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("%d  ", mat[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((mat[i][j]) < 0) {
                negCount++;
            }
        }
    }
    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d", negCount);

    return 0;
}
