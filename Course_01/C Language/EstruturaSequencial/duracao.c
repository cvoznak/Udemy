#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg, min, h, segf;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &seg);

    h = seg / 3600;
    min = (seg % 3600) / 60;
    segf = ((seg % 3600) % 60);

    printf("%d:%d:%d", h, min, segf);

    return 0;
}
