#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1 ; i < 11 ; i++) {
        r = n * i;
        printf("%d x %d = %d\n", n, i, r);
    }
    return 0;
}
