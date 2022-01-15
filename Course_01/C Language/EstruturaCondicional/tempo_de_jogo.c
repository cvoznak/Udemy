#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hi, hf, delta;

    printf("Hora inicial: ");
    scanf("%d", &hi);
    printf("Hora final: ");
    scanf("%d",&hf);

    if (hi>hf) {
        delta=((24-hi)+hf);
    }
    else if (hi==hf) {
        delta=24;
    }
    else {
        delta=hf-hi;
    }

printf("O JOGO DUROU %d HORA(S)", delta);
    return 0;
}
