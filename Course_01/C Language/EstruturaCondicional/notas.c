#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaf;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaf = (nota1 + nota2);

    printf("NOTA FINAL = %.1lf", notaf);

    if (notaf < 60.0) {
        printf("%\nREPROVADO");
    }

    return 0;
}
