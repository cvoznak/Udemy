#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double valorHora, pagamento;
    int horas;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorHora;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = (double) valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;
    return 0;
}
