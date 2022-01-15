#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char escala;
    double entrada, saida;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala == 'F') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> entrada;

        saida = (5 * (entrada - 32) / 9);

        cout << "Temperatura equivalente em Celsius: " << saida << endl;
    }
    else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> entrada;

        saida = (9 * entrada / 5) + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << saida << endl;
    }

    return 0;
}
