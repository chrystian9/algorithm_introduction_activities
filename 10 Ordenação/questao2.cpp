#include <iostream>
using namespace std;

void ordena(int vetor[], int tam){  //ordenação por selection sort, porem procurando o maior
    int maior, aux;
    for (int i = tam-1; i > 0; i--) {
		maior = i;
		for (int j = i - 1; j >= 0; j--) {
			if (vetor[j] > vetor[maior]){
				maior = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[maior];
		vetor[maior] = aux;
		for(int c=0; c<tam; c++){
			cout << vetor[c] << " ";
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
