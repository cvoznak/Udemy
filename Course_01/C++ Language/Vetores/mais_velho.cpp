#include <iostream>

using namespace std;

int main()
{
    int i, n;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nome[n];
    int idade[n], maisVelho, posVelho;

    for (i = 0; i < n; i++) {
        cout << "Dados da "<< i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
    }
    maisVelho = idade[0];
    posVelho = 0;

    for (i = 0; i < n; i++) {
        if (maisVelho < idade[i]) {
            maisVelho = idade[i];
            posVelho = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nome[posVelho] << endl;
    return 0;
}
