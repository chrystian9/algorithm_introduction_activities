#include <iostream>
using namespace std;

int main (){
	int n;
	
	cin >> n;
	
	float vet[n];
	float elemento[3];
	int posicao[3];
	
	for (int c=0; c<n; c++){
		cin >> vet[c];
		if (c == 0){
			elemento[0] = vet[c];
			elemento[1] = vet[c];
			posicao[0] = c;
			posicao[1] = c;
		}else if (vet[c] > elemento[0]){
			elemento[0] = vet[c];
			posicao[0] = c;
		}else if (vet[c] < elemento[1]){
			elemento[1] = vet[c];
			posicao[1] = c;
		}
	}

	if (n%2 == 0){
		posicao[2] = -1;
		elemento[2] = -1;
	}else{
		elemento[2] = vet[(n/2)];
		posicao[2] = n/2;
	}
	
	for (int c=0; c<3; c++){
		cout << elemento[c] << endl;
	}
	for (int c=0; c<3; c++){
		cout << posicao[c] << endl;
	}
	return 0;
}
