#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hora, x, soma, n, i;
    double c, f;
    char resp;
    cout << "Digite uma hora do dia: ";
    cin >> hora;

    if (hora < 12) {
        cout << "Bom dia!" << endl;
    }
    else {
        cout << "Boa tarde!" << endl;
    }

    soma = 0;
    cout << "Digite o primeiro numero: ";
    cin >> x;

    while (x != 0) {
        soma += x;
        cout <<"Digite outro numero: ";
        cin >> x;
    }

    cout << "SOMA = " << soma << endl;

    cout << "Quantos numeros serao digitados? ";
    cin >> n;

    soma = 0;

    for (i = 1; i <= n; i++) {
        cout << "Digite um numero: ";
        cin >> x;
        soma += x;
    }

    cout << "SOMA = " << soma << endl;

    do {
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;
        f = 9 * c / 5 + 32;
        cout << "Equivalente em Fahrenheit: " << f << endl;
        cout << "Deseja repetir (s/n)? ";
        cin >> resp;
    } while (resp == 's');

    return 0;
}
