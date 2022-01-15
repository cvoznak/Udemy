#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, m, j;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digitar um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS DIGITADOS: " << endl;
    cout << fixed << setprecision(1);
    for (i = 0; i < n; i++) {
        cout << vet [i] << endl;
    }

    cout << "Quantas linhas vai ter a matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter a matriz? ";
    cin>> n;

    int mat[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl << "MATRIZ DIGITADA:" << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
