#include <iostream>

using namespace std;

int main()
{
    int n, conteDentro(0), conteFora(0), i, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> x;

    for (i = 0; i < x; i++) {
        cout << "Digite um numero: ";
        cin >> n;
        if (n >= 10 &&  n <= 20) {
            conteDentro++;
        }
        else {
            conteFora++;
        }
    }
    cout << conteDentro << " DENTRO" << endl;
    cout << conteFora << " FORA" << endl;
    return 0;
}
