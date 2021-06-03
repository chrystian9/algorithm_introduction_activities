#include <iostream>
using namespace std;

int main(){
    int cod, quantidade, valor, valorU;
    float desconto, valorF;
    
    cin >> cod >> quantidade;
    
    if (cod <= 10){
        valorU = 10;
        valor = quantidade * 10;
        if (valor < 250){
            desconto = valor * 0.05;
            valorF = valor * 0.95;
        }else if (valor >= 250 and valor <= 500){
            desconto = valor * 0.10;
            valorF = valor * 0.90;
        }else if (valor > 500){
            desconto = valor * 0.15;
            valorF = valor * 0.85;
        }
    }else if (cod >= 11 and cod <= 20){
        valorU = 15;
        valor = quantidade * 15;
        if (valor < 250){
            desconto = valor * 0.05;
            valorF = valor * 0.95;
        }else if (valor >= 250 and valor <= 500){
            desconto = valor * 0.10;
            valorF = valor * 0.90;
        }else if (valor > 500){
            desconto = valor * 0.15;
            valorF = valor * 0.85;
        }
    }else if (cod >= 21 and cod <= 30){
        valorU = 20;
        valor = quantidade * 20;
        if (valor < 250){
            desconto = valor * 0.05;
            valorF = valor * 0.95;
        }else if (valor >= 250 and valor <= 500){
            desconto = valor * 0.10;
            valorF = valor * 0.90;
        }else if (valor > 500){
            desconto = valor * 0.15;
            valorF = valor * 0.85;
        }
    }else if (cod >= 31 and cod <= 40){
        valorU = 30;
        valor = quantidade * 30;
        if (valor < 250){
            desconto = valor * 0.05;
            valorF = valor * 0.95;
        }else if (valor >= 250 and valor <= 500){
            desconto = valor * 0.10;
            valorF = valor * 0.90;
        }else if (valor > 500){
            desconto = valor * 0.15;
            valorF = valor * 0.85;
        }
    }
    
    cout << valorU << endl << valor << endl << desconto << endl << valorF << endl;
    
    return 0;
}
