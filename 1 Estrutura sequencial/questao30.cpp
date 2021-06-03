#include <iostream>
using namespace std;

int main(){
    float valor;
    int bombom, pirulito, chiclete, bala;
    
    cin >> valor;
    bombom = valor / 5.0;
    valor = valor - (bombom * 5.0);
    pirulito = valor / 1.4;
    valor = valor - (pirulito * 1.4);
    chiclete = valor / 0.6;
    valor = valor - (chiclete * 0.6);
    bala = valor / 0.2;
    valor = valor - (bala * 0.2);
    cout << bombom << endl << pirulito << endl << chiclete << endl << bala << endl << valor;
    return 0;
}
