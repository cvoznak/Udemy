#include <iostream>

using namespace std;

int main()
{
    int cod, conte1(0), conte2(0), conte3(0);

    while (cod != 4) {
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> cod;

        if (cod == 1) {
            conte1++;
        }
        else if (cod == 2) {
            conte2++;
        }
        else if (cod == 3) {
            conte3++;
        }
    }
    cout << "MUITO OBRIGADO!" << endl;
    cout << "Alcool: " << conte1 << endl;
    cout << "Gasolina: " << conte2 << endl;
    cout << "Diesel: " << conte3 << endl;
    return 0;
}
