#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cod, qtd;
    double total;

    cout << "Codigo do produto comprado: ";
    cin >> cod;
    cout << "Quantidade comprada: ";
    cin >> qtd;

    switch (cod) {
        case 1:
            total = qtd * 5;
            break;
        case 2:
            total = qtd * 3.5;
            break;
        case 3:
            total = qtd * 4.8;
            break;
        case 4:
            total = qtd * 8.9;
            break;
        case 5:
            total = qtd * 7.32;
            break;
        case '\n':
        case ' ':
            break;
    }

    cout << fixed << setprecision(2);

    cout << "Valor a pagar: R$" << total << endl;
    return 0;
}
