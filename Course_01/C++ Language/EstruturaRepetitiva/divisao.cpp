#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;
    double num, deno, resultado;

    cout << "Quantos casos voce vai digitar?";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Entre com o numerador: ";
        cin >> num;
        cout << "Entre com o denominador: ";
        cin >> deno;

        if (deno == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else {
            resultado = num / deno;
            cout << fixed << setprecision(2) << "DIVISAO = " << resultado << endl;
        }
    }


    return 0;
}
