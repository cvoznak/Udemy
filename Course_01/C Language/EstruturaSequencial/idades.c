#include <stdio.h>
#include <string.h>

void clean_entry() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void read_text(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:%\n");
    printf("Nome: ");
    read_text(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:%\n");
    printf("Nome: ");
    clean_entry();
    read_text(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = ((double) idade1 + (double) idade2) / 2;

    printf("%\n A idade media de %s e %s e de %.2lf anos", nome1, nome2, media);

    return 0;
}
