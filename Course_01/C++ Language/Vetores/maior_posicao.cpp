#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, posicaoMaior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double v[n], maior;

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }
    cout << endl;

    maior = v[0];

    for (i = 0; i < n; i++) {
        if (maior < v[i]){
            maior = v[i];
            posicaoMaior = i;
        }
    }
    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " <<maior <<endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicaoMaior<< endl;


    return 0;
}
