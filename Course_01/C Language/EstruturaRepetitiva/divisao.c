#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    f = 1;

    for (i = 1 ; i <= n; i++) {
        f = f * i;
    }
    printf("FATORIAL = %d", f);

    return 0;
}
