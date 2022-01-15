#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n], maisVelho, j;

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(nomes[i], 50, stdin);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maisVelho = idades[0];
    for (int i = 0; i < n; i++){
        if (maisVelho < idades[i]) {
            maisVelho = idades[i];
            j = i;
        }
    }
    printf("PESSOA MAIS VELHA: %s", nomes[j]);
    return 0;
}
