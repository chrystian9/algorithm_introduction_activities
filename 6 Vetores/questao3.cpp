#include <iostream>
using namespace std;

void buscaBinaria(int vet[], int posInicial, int posFinal, int k, int& cont){
	int meio = (posInicial + posFinal)/2;
	
	if (k == vet[meio]){
		cout << meio << endl << cont;
	}else if (posInicial < posFinal){
		if (vet[meio] < k){
			cont++;
			return buscaBinaria(vet, meio+1, posFinal, k, cont);
		}else{
			cont++;
			return buscaBinaria(vet, posInicial, meio-1, k, cont);
		}
	}else{
		cout << -1 << endl << cont;
	}
}
		
	

int main (){
    int k, n, cont=1;
    
    cin >> n;

	int vet[n];
	
	for (int i=0; i < n; i++){
		cin >> vet[i];
	}
	
	cin >> k;
	
	buscaBinaria(vet, 0, (n-1), k, cont);
	
	return 0;
}
