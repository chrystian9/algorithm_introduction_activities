#include <iostream>
using namespace std;

int main(){
    float vet[10];
    int n_negativos=0, n_positivos=0; //numero de negativos e positivos
    
    for (int i=0; i < 10; i++){
        cin >> vet[i];
        if (vet[i] < 0){
            n_negativos++;
        }else{
            n_positivos++;
        }
    }
    
    float positivos[n_positivos];
    
    int p=0;
    float soma=0;
    
    for (int i=0; i < 10; i++){
        positivos[p++] = vet[i];
		soma += positivos[p-1];
    }
    cout << n_negativos << endl << soma << endl;
    
    return 0;
}
