#include <iostream>
using namespace std;

int main(){
	int vet[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int k, p;
	
	cin >> k;
	
	for (int i=0; i < k; i++){
		cin >> vet[i];
	}
	
	cin >> k >> p;
	
	int aux;
	for (int i = p; i < 10; i++){
		if (i == p){
			aux = vet[i];
			vet[i] = k;
		}else{
			k = aux;
			aux = vet[i];
			vet[i] = k;
		}
	}
	
	for (int i = 0; i < 10; i++){
		cout << vet[i] << " ";
	}
	return 0;
}
