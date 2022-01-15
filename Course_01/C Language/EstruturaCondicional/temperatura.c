#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char entrada;
    double c, f;
    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c", &entrada);
    if (entrada=='f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &f);
        c=(5*(f-32)/9);
        printf("Temperatura equivalente em Celsius: %.2lf", c);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f=(c*9)/5+32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", f);
    }
    return 0;
}
