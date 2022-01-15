#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nome[n];
    int idades[n], conteMenores(0);
    double alturas[n], somaAlturas(0), alturaMedia, porcentagemMenores;

    for (i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }
    for (i = 0; i < n; i++) {
        somaAlturas += alturas[i];
        if (idades[i] < 16) {
            conteMenores++;
        }
    }

    alturaMedia = somaAlturas / n;
    porcentagemMenores = (conteMenores * 100) / n;

    cout << endl;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;
    cout << fixed << setprecision(1) << "Pessoas com menos de 16 anos: " << porcentagemMenores << "%" << endl;
    for (i = 0; i < n; i++) {
        somaAlturas += alturas[i];
        if (idades[i] < 16) {
            cout << nome[i] << endl;
        }
    }
    return 0;
}
