#include <iostream>
using namespace std;

void ordena(int v[], int tam){
	int pivo, j;
	for (int i = 1; i < tam; i++) {
		pivo = v[i];
		j = i - 1;
		while ((j >= 0) and (pivo > v[j])){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = pivo;
	}
}


int main (){
	int num, rodadas, aux=0;// numero de jogadores e numero de rodadas
	
	cin >> num >> rodadas;
	
	int vet[num];
	
	for(int c=0; c<num; c++) vet[c] = 0;
	
	for(int i=0; i<rodadas; c++){
		for(int j=0; j<num; j++){
			cin >> aux;
			vet[j] += aux;
		}
	}
	
	ordena(vet, n);
	
	for(int c=0; c<num; c++) cout << vet[c];
		
	return 0;
}
		
	
