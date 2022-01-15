#include <iostream>

using namespace std;

int main()
{
    double n1, n2, nf;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    nf = n1 + n2;

    cout << "NOTA FINAL = " << nf << endl;

    if (nf < 60) {
        cout << "REPROVADO";
    }


    return 0;
}
