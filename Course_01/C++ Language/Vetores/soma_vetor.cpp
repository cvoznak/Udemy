#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double v[n], soma(0), media;

    for (i = 0; i < n ; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    cout << fixed << setprecision(1);
    cout << "VALORES:";
    for (i = 0; i < n ; i++) {
        cout << " " << v[i];
        soma += v[i];
        }
    media = soma / n;
    cout << endl;
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
