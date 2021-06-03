#include <iostream>
using namespace std;

void ordena(int vet[], int tam){
	int pivo, j;
	for(int i=1; i<tam; i++){
		pivo = vet[i];
		j = i-1;
		while((j>=0) and (pivo < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
		for(int c=0; c<tam; c++){
			cout << vet[c] << " ";
		}
		cout << endl;
	}
}

int main (){
	int n;
	cin >> n;
	
	int vet[n];
	for(int c=0; c<n; c++){
		cin >> vet[c];
	}
	
	ordena(vet, n);
	
	return 0;
}
