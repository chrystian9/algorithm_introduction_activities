#include <iostream>
using namespace std;

int main(){
    int produtos, comuns, luxo;
    
    cin >> produtos;
    luxo = produtos / 3;
    comuns = produtos - luxo;
    cout << comuns << endl << luxo;
    return 0;
}
