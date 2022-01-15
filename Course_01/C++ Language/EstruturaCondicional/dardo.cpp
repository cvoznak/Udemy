#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, maior;

    cout << "Digite as tres distancias: " << endl;
    cin >> a >> b >> c;

    maior = a;

    if (maior < b) {
        maior = b;
    }
    else if (maior < c) {
        maior = c;
    }
    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;
    return 0;
}
