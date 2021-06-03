#include <iostream>
using namespace std;

void ordena(float vet[], int tam){
	float pivo;
	int j;
	for(int i=0; i<tam; i++){
		pivo = vet[i];
		j = i-1;
		while((j>=0) and (pivo < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

int main(){
	float vet[20];
	int cont=0;
	
	while(vet[cont-1] != -1){
		cin >> vet[cont];
		cont++;
	}
	ordena(vet, cont-1);
	
	if((cont-1)%2 == 0){
		cout << ((vet[cont/2])+(vet[((cont/2)-1)]))/2 << endl;
	}else{
		cout << vet[(cont-1)/2] << endl;
	}
	return 0;
}
