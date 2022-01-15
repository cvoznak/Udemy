#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int idade(0), soma(0), contador(0);
    double media;

    cout << "Digite as idades:" << endl;

    while (idade >= 0) {
        cin >> idade;
        if (idade > 0) {
            contador++;
            soma += idade;
        }
    }

    if (contador > 0) {
        media = (double) soma / contador;
        cout << fixed << setprecision(2) << "MEDIA = " << media <<endl;
    }
    else {
        cout << "IMPOSSIVEL CALCULAR";
    }
    return 0;
}
