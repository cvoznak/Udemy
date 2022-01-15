#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double raio, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = M_PI * pow(raio, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
