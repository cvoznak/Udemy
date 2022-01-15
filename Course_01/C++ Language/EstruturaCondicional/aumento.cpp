#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salarioAtual, salarioNovo, aumento, porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salarioAtual;

    if (salarioAtual <= 1000) {
        porcentagem = 20;
    }
    else if (salarioAtual > 1000 && salarioAtual <= 3000) {
        porcentagem = 15;
    }
    else if (salarioAtual > 3000 && salarioAtual <= 8000) {
        porcentagem = 10;
    }
    else {
        porcentagem = 5;
    }

    aumento = salarioAtual * (porcentagem/100);
    salarioNovo = salarioAtual + aumento;

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$ " << salarioNovo << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << fixed << setprecision(0) << "Porcentagem = " << porcentagem << " %" << endl;

    return 0;
}
