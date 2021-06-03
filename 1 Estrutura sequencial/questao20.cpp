#include <iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;
    
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cin >> peso1;
    cin >> peso2;
    cin >> peso3;
    cout << ((nota1 * peso1) + (nota2* peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    return 0;
}
