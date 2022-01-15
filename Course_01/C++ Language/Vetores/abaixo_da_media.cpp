#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double v[n], soma(0), media;

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    media = soma / n;

    cout << endl;
    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = " << media << endl;
    cout << fixed << setprecision(1);
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (i = 0; i < n; i++) {
        if (v[i] < media) {
            cout << v[i] << endl;
        }
    }

    return 0;
}
