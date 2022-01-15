#include <iostream>

using namespace std;

int main()
{
    int horaInicial, horaFinal, duracao;

    cout << "Hora inicial: ";
    cin >> horaInicial;
    cout << "Hora final: ";
    cin >> horaFinal;

    if (horaInicial == horaFinal) {
        duracao = 24;
    }
    else if (horaInicial >= 12) {
        duracao = 24 - horaInicial + horaFinal;
    }
    else {
        duracao = horaFinal - horaInicial;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    return 0;
}
