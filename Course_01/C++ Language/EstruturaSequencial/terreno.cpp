#include <iostream>

using namespace std;

int main()
{
    double preco, area, valorMetro, largura, comprimento;

    cout << "Digite a  largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    area = largura * comprimento;

    preco = area * valorMetro;

    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << preco << endl;

    return 0;
}
