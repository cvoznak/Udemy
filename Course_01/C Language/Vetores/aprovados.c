#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nomes[n][50];
    double n1[n], n2[n], media;

    for(int i = 0; i < n; i++) {
        printf("Digite nome, primeira nota e segunda nota do %do aluno:\n", i + 1);
        fseek(stdin, 0, SEEK_END);
        fgets(nomes[i], 50, stdin);
        scanf("%lf", &n1[i]);
        scanf("%lf", &n2[i]);
    }

    printf("Alunos aprovados:\n");

    for(int i = 0; i < n; i++) {
        media = (n1[i] + n2[i]) / 2;
        if (media >= 6) {
            printf("%s", nomes[i]);
        }
    }

    return 0;
}
