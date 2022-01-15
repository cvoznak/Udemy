#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, count1, count2, count3;

    cod = 0;
    count1 = 0;
    count2 = 0;
    count3 = 0;

    while (cod != 4) {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &cod);

        if (cod == 1) {
            count1++;
        }
        else if (cod == 2) {
            count2++;
        }
        else if (cod == 3) {
            count3++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", count1);
    printf("Gasolina: %d\n", count2);
    printf("Diesel: %d\n", count3);

    return 0;
}
