#include <iostream>
using namespace std;

void ordena(int vet[], int inicio, int tam){
	int pivo, j;
	if(inicio == 0){
		for(int i=inicio+1; i<tam; i++){
			pivo = vet[i];
			j = i - 1;
			while((j >= inicio) and (pivo < vet[j])){
				vet[j+1] = vet[j];
				j--;
			}
			vet[j+1] = pivo;
		}
	}else{
		for(int i=inicio+1; i<tam; i++){
			pivo = vet[i];
			j = i - 1;
			while((j >= inicio) and (pivo > vet[j])){
				vet[j+1] = vet[j];
				j--;
			}
			vet[j+1] = pivo;
		}
	}
}


int main (){
	int n;
	
	cin >> n;
	
	int vet[n];
	for(int c=0; c<n; c++){
		cin >> vet[c];
	}
	
	if(n % 2 == 0){
		ordena(vet, 0, (n/2));
		ordena(vet, n/2, n);
	}else if(n % 2 != 0){
		ordena(vet, 0, (n/2)+1);
		ordena(vet, (n/2)+1, n);
	}
	for(int c=0; c<n; c++){
		cout << vet[c] << " ";
	}
	cout << endl;
	return 0;
}
