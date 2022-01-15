#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtd;
    double preco, recebido, total, troco, falta;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    total = preco * qtd;
    cout << fixed << setprecision(2);

    if (recebido > total) {
        troco = recebido - total;
        cout << "TROCO = " << troco << endl;
    }
    else if (recebido < total) {
        falta = total - recebido;
        cout << "DINHHEIRO INSUFICIENTE. FALTAM "<< falta << " REAIS" << endl;
    }
    else {
        cout << "VALOR EXATO! SEM TROCO." << endl;
    }

    return 0;
}
