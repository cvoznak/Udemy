#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    i = -1;

    do {
        i = i + 2;
        printf("%d\n", i);
    } while (i <= (x - 2));
    return 0;
}
