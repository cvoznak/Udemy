#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int v[n], contePares(0);

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }
    cout << endl;
    cout << endl;
    cout << "NUMEROS PARES:" <<endl;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0){
            cout <<" " << v[i];
            contePares++;
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << contePares;



    return 0;
}
