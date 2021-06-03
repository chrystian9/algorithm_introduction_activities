#include <iostream>
using namespace std;

int main (){
    int vet[8];
    int n_positivos = 0, n_negativos = 0, i = 0;
    
    while (i < 8){
        cin >> vet[i];
        if (vet[i] < 0){
            n_negativos++;
        }else{
            n_positivos++;
        }
        i++;
    }
    
    int negativos[n_negativos];
    int positivos[n_positivos];
    
    int n=0; 
    int p=0;
    i=0;
    
    while (i < 8){
        if (vet[i] < 0){
            negativos[n++] = vet[i];
        }else{
            positivos[p++] = vet[i];
        }
        i++;
    }
    i=0;
    
    while (i < n_positivos){
        cout << positivos[i] << " ";
        i++;
    }
    cout << endl;
    i=0;
    
    while (i < n_negativos){
        cout << negativos[i] << " ";
        i++;
    }
    cout << endl;
    
    return 0;
}
