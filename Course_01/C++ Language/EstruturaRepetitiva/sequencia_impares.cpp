#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Digite o valor de X: ";
    cin >> x;

    for (int i = 1; i <= x; i+=2) {
        cout << i << endl;
    }
    return 0;
}
