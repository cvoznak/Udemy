#include <iostream>

using namespace std;

int main()
{
    int a, b;



    while (a != b) {
        cout << "Digite dois numeros:" << endl;
        cin >> a >> b;

        if (a < b) {
            cout << "CRESCENTE!"<< endl;
        }
        else if (a > b) {
            cout << "DECRESCENTE" << endl;
        }
    }
    return 0;
}
