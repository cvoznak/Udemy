#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, i, qtd, total(0), totalCoelhos(0), totalRatos(0), totalSapos(0);
    double percentualCoelhos, percentualRatos, percentualSapos;
    char tp;

    cout << "Quantos casos de testes serao digitados? ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> tp;
        total += qtd;
        if (tp == 'C') {
            totalCoelhos += qtd;
        }
        else if (tp == 'R') {
            totalRatos += qtd;
        }
        else if (tp == 'S') {
            totalSapos += qtd;
        }
    }

    percentualCoelhos = (double) (totalCoelhos*100 / total);
    percentualRatos = (double) (totalRatos*100 / total);
    percentualSapos = (double) (totalSapos*100 / total);

    cout << "Relatorio Final:";
    cout << "Total: " << total << " cobaias"<< endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualCoelhos << endl;
    cout << "Percentual de ratos: " << percentualRatos << endl;
    cout << "Percentual de sapos: " << percentualSapos << endl;
    return 0;
}
