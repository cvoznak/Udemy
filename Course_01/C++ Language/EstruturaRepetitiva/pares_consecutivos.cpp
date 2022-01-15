#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main()
{
    int x, i(0);
    double soma(0);

    do {
        cout << "Digite um numero inteiro: ";
        cin >> x;

        if (x % 2 != 0) {
            x += 1;
        }
        else if (x == 0) {
            break;
        }
        while (i <= 8) {
            soma += (x+i);
            i+=2;
        }
        cout << "SOMA = " << soma << endl;
        soma = 0;
        i = 0;
    } while (x != 0);

    return 0;
}
