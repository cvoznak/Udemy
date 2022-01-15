#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, temp, primeiroImpar, soma(0), i;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    if (x % 2 == 0) {
        primeiroImpar = x + 1;
    }
    else if (x % 2 != 0) {
        primeiroImpar = x + 2;
    }

    for (i = primeiroImpar; i < y; i+=2) {
        soma += i;
    }
    cout << "SOMA DOS IMPARES = " << soma << endl;
    return 0;
}
