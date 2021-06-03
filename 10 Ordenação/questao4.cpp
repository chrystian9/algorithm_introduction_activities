#include <iostream>
using namespace std;

void ordena(int vet[], int tam){
	int aux;
	for (int i = 0; i < tam-1; i++){
		for (int j = 0; j < tam-1-i; j++){
			if (vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	
	int vet[n];
	for(int c=0; c<n; c++){
		cin >> vet[c];
	}
	
	ordena(vet, n);
	
	for(int c=0; c<n; c++){
		cout << vet[c] << " ";
	}
	return 0;
}	
