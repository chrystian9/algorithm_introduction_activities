#include <iostream>
using namespace std;

void ordenaPar(int vet[], int tam){
	int pivo, j;
	for(int i=1; i<tam; i++){
		pivo = vet[i];
		j = i-1;
		while((j>=0) and (pivo < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

void ordenaImpar(int vet[], int tam){
	int pivo, j;
	for(int i=1; i<tam; i++){
		pivo = vet[i];
		j = i-1;
		while((j>=0) and (pivo > vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

int main (){
	int n;
	cin >> n;
	
	int matriz[n][n];
	int vet[n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> matriz[i][j];
			vet[j] = matriz[i][j];
		}
		if(i%2 == 0){
			ordenaPar(vet, n);
		}else{
			ordenaImpar(vet, n);
		}
		for(int j=0; j<n; j++){
			matriz[i][j] = vet[j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
