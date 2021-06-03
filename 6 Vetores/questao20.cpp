#include <iostream>
using namespace std;

int main (){
	int vet[20], maior=0;
	for (int c=0; c<20; c++){
		cin >> vet[c];
		if (c == 0){
			maior = vet[c];
		}else if(vet[c] > maior){
			maior = vet[c];
		}
	}
	for (int c=0; c<20; c++){
		cout << vet[c]/float(maior) << " ";
	}
	return 0;
}
