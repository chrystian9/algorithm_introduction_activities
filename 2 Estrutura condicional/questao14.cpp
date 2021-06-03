#include <iostream>
using namespace std;

int main(){
    float valor, valorF;
    
    cin >> valor;
    
    if (valor <= 20000){
        valorF = valor * 1.05;
    }else if (valor > 20000 and valor <= 40000){
        valorF = (valor * 1.10) * (1.30);
    }else if (valor > 40000){
		valorF = (valor * 1.15) * (1.35);
	}
	cout << valorF;
    return 0;
}
