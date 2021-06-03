#include <iostream>
using namespace std;

int main(){
    int minutos, horas , milissegundos;
    float segundos;
    
    cin >> milissegundos;
    horas = milissegundos / 3600000;
    milissegundos = milissegundos % 3600000;
    minutos = milissegundos / 60000;
    milissegundos = milissegundos % 60000;
    segundos = milissegundos / 1000;
    milissegundos = milissegundos % 1000;
    cout << horas << " : " << minutos << " : " << segundos << endl;
    return 0;
}