#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;
    double a, b, c, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(1);

    for (i = 0; i < n ; i++) {
        cout << "Digite tres numeros:" << endl;
        cin >> a >> b >> c;
        media = (a * 2 + b * 3 + c * 5) / 10;
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
