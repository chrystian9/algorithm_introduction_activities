#include <iostream>
using namespace std;

void ordena(int vetor[], int tam){  //ordenação por selection sort
    int menor, aux;
    for (int i = 0; i < tam-1; i++) {
		menor = i;
		for (int j = i + 1; j < tam; j++) {
			if (vetor[j] < vetor[menor]){
				menor = j;
			}
		}
   	 aux = vetor[i];
   	 vetor[i] = vetor[menor];
   	 vetor[menor] = aux;
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
	
	for(int c=0; c<n; c++){
		cout << vet[c] << endl;
	}
	return 0;
}
