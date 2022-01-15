#include <iostream>

using namespace std;

int main()
{
    int n, resultado;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i=1; i <= 10; i++) {
        resultado = i * n;
        cout << n << " X " << i << " = " << resultado << endl;
    }

    return 0;
}
