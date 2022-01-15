#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;

    cout <<"Quantas pessoas serao digitadas? ";
    cin >> n;

    double altura[n], menorAltura, maiorAltura, mediaF, somaF(0);
    char sexo[n];
    int conteF(0);

    for (i = 0; i < n; i++) {
        cout <<"Altura da " << i + 1 <<"a pessoa: ";
        cin >> altura[i];
        cout <<"Genero da " << i + 1 <<"a pessoa: ";
        cin >> sexo[i];
    }

    menorAltura = altura[0];
    maiorAltura = altura[0];

    for (i = 0; i < n; i++) {
        if (menorAltura > altura[i]) {
            menorAltura = altura[i];
        }
        if (maiorAltura < altura[i]) {
            maiorAltura = altura[i];
        }
        if (sexo[i] == 'F') {
            conteF++;
            somaF += altura[i];
        }
    }

    mediaF = somaF / conteF;

    cout << "Menor altura = " << menorAltura <<endl;
    cout << "Maior altura = " << maiorAltura <<endl;
    cout << fixed << setprecision(2);
    cout << "Media das alturas das mulheres = " << mediaF <<endl;
    cout << "Numero de homens = " << n - conteF << endl;
    return 0;
}
