#include <iostream>
using namespace std;

int main() {
    int nota50 = 0, nota10 = 0, nota5 = 0, nota1 = 0, valor = 0;

    cin >> valor;
    nota50 = valor / 50;
    valor = valor % 50;
    nota10 = valor / 10;
    valor = valor % 10;
    nota5 = valor / 5;
    valor = valor % 5;
    nota1 = valor / 1;
    valor = valor % 1;
    cout << nota50 << endl << nota10 << endl << nota5 << endl << nota1;
    return 0;
}
    
