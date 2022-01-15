#include <iostream>

using namespace std;

int main()
{
    double medida;

    cout << "Digite a medida da glicose: ";
    cin >> medida;

    if (medida <= 100) {
        cout << "Classificacao: normal" << endl;
    }
    else if (medida > 100 && medida <= 140) {
        cout << "Classificacao: elevado";
    }
    else {
        cout << "Classificacao: diabetes";
    }

    return 0;
}
