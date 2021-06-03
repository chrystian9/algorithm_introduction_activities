#include <iostream>
using namespace std;

int soma(int n1, int n2){
    int soma;
    soma = n1 + n2;
    return soma;
}

int main(){
    int n1, n2;
    
    cin >> n1 >> n2;
    
    cout << soma(n1, n2) << endl;
    
    return 0;
}
