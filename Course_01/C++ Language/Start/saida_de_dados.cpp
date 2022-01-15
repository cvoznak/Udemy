#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Bom dia" << endl;
    cout << "Boa noite!\n";

    int x, y;

    x = 10;
    y = 20;

    cout << x << endl;
    cout << y << endl;

    double w;

    w = 2.3456;

    cout << w << endl;

    cout << fixed << setprecision(2);
    cout << w << endl;

    cout << fixed << setprecision(1) << w << endl;

    int idade;
    double salario;
    string nome;
    char sexo;

    idade = 32;
    salario = 4560.9;
    nome = "Maria Silva";
    sexo = 'F';

    cout << fixed << setprecision(2);
    cout << "A funcionaria "<< nome<<", sexo "<< sexo<< ", ganha " << salario << " e tem "<< idade<< " anos" << endl;


    return 0;
}
