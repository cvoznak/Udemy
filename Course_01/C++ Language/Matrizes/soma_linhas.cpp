#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n], vet[m], somaTemp(0);

    for (i = 0; i < m; i++) {
        cout << "Digite os elementos da " << i + 1 << "a linha: " << endl;
        for (j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "VETOR GERADO:" << endl;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            somaTemp += mat[i][j];
            }
        vet[i] = somaTemp;
        cout << vet[i] << endl;
        somaTemp = 0;
    }


    return 0;
}
