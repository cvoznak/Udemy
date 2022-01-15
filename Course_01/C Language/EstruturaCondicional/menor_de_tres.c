#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2, v3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &v1);
    printf("Segundo valor: ");
    scanf("%d", &v2);
    printf("Terceiro valor: ");
    scanf("%d", &v3);

    menor = v1;

    if (menor>v2) {
        menor = v2;
    }
    else if (menor>v3) {
        menor = v3;
    }
    printf("MENOR = %d", menor);

    return 0;
}
