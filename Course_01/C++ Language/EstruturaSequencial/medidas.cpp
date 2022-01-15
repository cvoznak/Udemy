#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, areaQua, areaTri, areaTra;

    cout << "Digite a medida A: ";
    cin >> a;

    cout << "Digite a medida B: ";
    cin >> b;

    cout << "Digite a medida C: ";
    cin >> c;

    areaQua = pow (a, 2);
    areaTri = a * b / 2;
    areaTra = (a + b) * c / 2;

    cout << fixed << setprecision (4);
    cout << "AREA DO QUADRADO = " << areaQua << endl;
    cout << "AREA DO TRIANGULO = " << areaTri << endl;
    cout << "AREA DO TRAPEZIO = " << areaTra << endl;

    return 0;
}
