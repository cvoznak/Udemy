#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "VALORES NEGATIVOS:" << endl;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (mat [i][j] < 0) {
                cout << mat[i][j] << endl;
            }
        }
    }
    return 0;
}
