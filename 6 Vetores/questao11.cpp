#include <iostream>
using namespace std;

void intersection(int qtd1, int qtd2, int vet1[], int vet2[]){
	int result[qtd1];
	int c=0, r=0;
	result[0]=-1;
	
	for(int i=0; i<qtd1; i++){
		for(int j=0; j<qtd2; j++){
			if(vet1[i] == vet2[j]){
				result[c] = vet1[i];
				c++;
			}
		}
	}
	do{ cout << result[r] << " "; r++; }while(r<c);
	
}

int main(){
	int qtd1, qtd2;
	cin >> qtd1 >> qtd2;
	int vet1[qtd1], vet2[qtd2];
	for(int c=0; c<qtd1; c++)
		cin >> vet1[c];
	for(int c=0; c<qtd2; c++)
		cin >> vet2[c];
	
	intersection(qtd1, qtd2, vet1, vet2);
	
	return 0;
}
