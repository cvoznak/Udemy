#include <iostream>

using namespace std;

int main()
{
    int x, n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> x;
        if (x == 0) {
            cout << "NULO" << endl;
        }
        else if (x % 2 == 0) {
            if (x > 0) {
                cout << "PAR POSITIVO" << endl;
            }
            else {
                cout << "PAR NEGATIVO" << endl;
            }
        }
        else if (x % 2 != 0) {
            if (x > 0) {
                cout << "IMPAR POSITIVO" << endl;
            }
            else {
                cout << "IMPAR NEGATIVO" << endl;
            }
        }
    }
    return 0;
}
