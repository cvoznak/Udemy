#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n], conteNeg(0), maior;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for (i = 0; i < n; i++) {
        maior = mat[i][0];
        for (j = 0; j < n; j++) {
            if (maior < mat[i][j]) {
                maior = mat[i][j];
            }
        }
        cout << maior << endl;
    }

    return 0;
}
