#include <iostream>
using namespace std;

int main (){
    int tipo;
    float valor;
    
    cin >> tipo;
    cin >> valor;
    
    if (tipo == 1){
        valor = valor * 1.005;
        cout << valor;
    }else{
        valor = valor * 1.03;
        valor = valor - 30;
        cout << valor;
    }
    return 0;
}
