#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int v[n];

    for (i = 0; i < n ; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }
    cout << "NUMEROS NEGATIVOS:" << endl;
    for (i = 0; i < n ; i++) {
        if (v[i] < 0) {
            cout << v[i] <<endl;
        }

    }

    return 0;
}
