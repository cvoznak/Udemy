#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, senhaCorreta;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    senhaCorreta = 2002;

    while (senha != senhaCorreta) {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &senha);
    }
    return 0;
}
