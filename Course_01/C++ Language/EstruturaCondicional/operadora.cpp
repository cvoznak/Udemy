#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int mn;
    double total;

    cout << "Digite a quantidade de minutos: ";
    cin >> mn;

    if (mn > 100) {
        total = 50 + 2 * (mn - 100);
    }
    else {
        total = 50;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;
    return 0;
}
