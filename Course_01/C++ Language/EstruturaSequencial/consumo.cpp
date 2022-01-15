#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int distancia;
    double gasto, consumoMedio;

    cout << "Distancia percorrida: ";
    cin >> distancia;

    cout << "Combustivel gasto: ";
    cin >> gasto;

    consumoMedio = distancia / gasto;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumoMedio << endl;
    return 0;
}
