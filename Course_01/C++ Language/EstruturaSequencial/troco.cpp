#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double troco, recebido, preco;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    troco = recebido - (preco * qtd);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}
