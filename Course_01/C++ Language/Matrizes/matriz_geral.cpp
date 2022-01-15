#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int linha, coluna;
    double mat[n][n], somaPosi(0), matA[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                somaPosi += mat[i][j];
            }
        }
    }
    cout << endl;
    cout << fixed << setprecision (1);
    cout << "SOMA DOS POSITIVOS: " << somaPosi << endl;
    cout << endl;
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for (j = 0; j < n; j++) {
        cout << mat[linha][j] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for (i = 0; i < n; i++) {
        cout << mat[i][coluna] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "DIAGONAL PRINCIPAL: ";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                cout << mat[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << endl;
    cout << "MATRIZ ALTERADA" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                matA[i][j] = mat[i][j];
            }
            else {
                matA[i][j] = pow(mat[i][j], 2);
            }
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
