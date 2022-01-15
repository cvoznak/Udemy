#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    double a[n], b[n];

    cout << "Digite os valores do vetor A:" << endl;

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Digite os valores do vetor B:" << endl;

    for (i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << "VETOR RESULTANTE:" << endl;

    for (i = 0; i < n; i++) {
        cout << a[i] + b[i] << endl;
    }
    return 0;
}
