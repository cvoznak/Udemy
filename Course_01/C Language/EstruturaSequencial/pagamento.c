#include <stdio.h>
#include <stdlib.h>
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
    char nome[50];
    double valor, horas, salario;

    printf("Nome: ");
    read_text(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%lf", &horas);

    salario = valor * horas;

    printf("O pagamento para %s deve ser %.2lf", nome, salario);

    return 0;
}
