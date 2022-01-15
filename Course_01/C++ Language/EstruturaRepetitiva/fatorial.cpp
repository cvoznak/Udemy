#include <iostream>

using namespace std;

int main()
{
    int n, i, fatorial(1);

    cout << "Digite o valor de N: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    cout << "FATORIAL = " << fatorial << endl;
    return 0;
}
