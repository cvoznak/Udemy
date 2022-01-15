#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, a, b, resultado;

    x = 5;
    y = 2 * x;
    cout << x << endl;
    cout << y << endl;

    double z, b1, b2, b3, h, area, t;

    z = 2 * x;

    cout << z << endl;
    cout << fixed << setprecision(1) << z << endl;

    b1 = 6;
    b2 = 8;
    h = 5;

    area = (b1 + b2) / 2 * h;

    cout << area << endl;

    a = 5;
    b = 2;
    resultado = a / b;

    cout << resultado << endl;

    t = (int) a;

    cout << t << endl;

    return 0;
}
