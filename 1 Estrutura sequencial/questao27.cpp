#include <iostream>
using namespace std;

int main (){
    int largura, altura, xV, yV;
    int aux1, aux2;
    float xA, yA;
    
    cin >> largura >> altura >> xV >> yV;
    
    aux1 = largura / 2;
    aux2 = xV - aux1;
    xA = (float)aux2 / aux1;
    aux1 = altura / 2;
    aux2 = yV - aux1;
    yA = (0-((float)aux2)) / aux1;
    cout << xA << endl << yA << endl;
}