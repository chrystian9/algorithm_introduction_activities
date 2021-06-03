#include <iostream>
using namespace std;

int buscaBinaria(int vet[], int posInicial, int posFinal, int k, int& cont){
	int meio = (posInicial + posFinal)/2;
	
	if (k == vet[meio]){
		cont++;
		return cont;
	}else if (posInicial < posFinal){
		if (vet[meio] < k){
			cont++;
			return buscaBinaria(vet, meio+1, posFinal, k, cont);
		}else{
			cont++;
			return buscaBinaria(vet, posInicial, meio-1, k, cont);
		}
	}
}
	
int main (){
	int n, num;
	int cont=1;

	cin >> n;
	
	int vet[n];
	for (int c=0; c<n; c++){
		cin >> vet[c];
	}
	
	cin >> num;

	for (int c=0; c<n; c++){
		if (vet[c] == num){
			cout << vet[c] << endl << cont << endl;
		}else if (cont == n){
			cout << -1 << endl << cont << endl;
		}else{
			cont++;
		}
	}

	cont = 1;
	cout << buscaBinaria(vet, 0, n, num, cont) << endl;
	
	return 0;
}
