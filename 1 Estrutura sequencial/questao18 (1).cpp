#include <iostream>
using namespace std;

int main(){
    int valorTotal, valorCompra, n20, n10, n5, n2, n1;
    
    cin >> valorTotal;
    cin >> valorCompra;
    valorTotal = valorTotal - valorCompra;
    n20 = valorTotal / 20;
    valorTotal = valorTotal % 20;
    n10 = valorTotal / 10;
    valorTotal = valorTotal % 10;
    n5 = valorTotal / 5;
    valorTotal = valorTotal % 5;
    n2 = valorTotal / 2;
    valorTotal = valorTotal % 2;
    n1 = valorTotal / 1;
    valorTotal = valorTotal % 1;
    cout << n20 << endl << n10 << endl << n5 << endl << n2 << endl << n1;
    return 0;
}
