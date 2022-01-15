#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n], soma(0);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j < i) {
                    soma += mat[i][j];
        }
    }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;
    return 0;
}
