#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;

    cout << "Serao digitados dados de quantos produtos?";
    cin >> n;

    string nome[n];
    double compra[n], venda[n], lucro[n], porcentagemLucro[n], totalCompra(0), totalVenda(0);
    int conteMe10(0), conteEntre1020(0), conteMa20(0);


    for (i = 0; i < n; i++) {
        cout << "Produto "<< i + 1 << endl;
        cout << "Nome: " ;
        cin >> nome[i];
        cout << "Preco de compra: ";
        cin >> compra[i];
        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    for (i = 0; i < n; i++) {
        lucro[i] = venda[i] - compra[i];
        porcentagemLucro[i] = lucro[i] * 100 / compra[i];
        if (porcentagemLucro[i] < 10) {
            conteMe10++;
        }
        else if (porcentagemLucro[i] >= 10 && porcentagemLucro[i] <= 20) {
            conteEntre1020++;
        }
        else {
            conteMa20++;
        }
        totalCompra += compra[i];
        totalVenda += venda[i];
    }
    cout << endl;
    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << conteMe10 << endl;
    cout << "Lucro entre 10% e 20%: " << conteEntre1020 << endl;
    cout << "Lucro acima de 20%: " << conteMa20 << endl;
    cout << fixed<< setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << totalVenda - totalCompra << endl;
    return 0;
}
