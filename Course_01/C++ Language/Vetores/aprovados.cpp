#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int i, n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nome[n];
    double n1[n], n2[n];

    for (i = 0; i < n; i++) {
        cout << "Digite nome, primeira e segunda nota do "<< i + 1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> n1[i];
        cin >> n2[i];
    }

    cout << "Alunos aprovados:" << endl;

    for (i = 0; i < n; i++) {
        if (((n1[i] + n2[i])/2) >= 6) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
