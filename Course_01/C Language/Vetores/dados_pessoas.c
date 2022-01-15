#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, countH, countT;

    printf("Quantas pessoas serao digitdas? ");
    scanf("%d", &n);

    double altura[n], menor, maior, media, soma;
    char genero[n];

    for(int i = 0; i < n; i++) {
        printf("Altura da %da pessoa: ",i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        fseek(stdin,0, SEEK_END);
        fgets(&genero[i], 50, stdin);
    }

    menor = altura[0];
    maior = altura[0];
    countH = 0;
    countT = 0;
    soma = 0;

    for(int i = 0; i < n; i++) {
        if (menor > altura[i]) {
            menor = altura[i];
        }
        if (maior < altura[i]) {
            maior = altura[i];
        }
        soma += altura[i];
        countT++;
        if (genero[i] == 'M') {
            countH++;
        }
    }
    media = soma / countT;

    printf("Menor altura = %.2lf\n", menor);
    printf("Maior das alturas = %.2lf\n", maior);
    printf("Media das alturas das mulheres = %.2lf\n", media);
    printf("Numero de homens = %d", countH);
    return 0;
}
