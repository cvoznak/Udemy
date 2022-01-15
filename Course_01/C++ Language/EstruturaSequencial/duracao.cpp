#include <iostream>

using namespace std;

int main()
{
    int inseg, outseg, mn, hor;

    cout << "Digite a duracao em segundos: ";
    cin >> inseg;

    hor = inseg / 3600;
    mn = (inseg % 3600) / 60;
    outseg = (inseg % 3600) % 60;

    cout << hor << ":" << mn << ":" << outseg << endl;
    return 0;
}
