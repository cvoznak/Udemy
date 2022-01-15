#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, media;
    int n, i;

    printf("Quantos casos voce vai digitar?" );
    scanf("%d", &n);

    for (i = 0 ; i < n ; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf%lf%lf", &a, &b, &c);

        media = ((a * 2) + (b * 3) + (c * 5)) / 10;

        printf("MEDIA = %.1lf\n", media);
    }
    return 0;
}
