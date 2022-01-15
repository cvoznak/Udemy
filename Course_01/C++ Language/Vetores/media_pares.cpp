#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int v[n], soma(0), contePares(0);
    double media;

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            contePares++;
            soma += v[i];
        }
    }

    if (soma == 0) {
        cout << "NENHUM NUMERO PAR";
    }
    else {
        media = (double) soma / contePares;
        cout << fixed << setprecision(1) << "MEDIA DOS PARES = " << media;
    }

    return 0;
}
