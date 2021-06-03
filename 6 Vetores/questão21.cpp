#include <iostream>
using namespace std;

int main (){
	int codigo;
	float vet[20];
	
	cin >> codigo;
	for (int c=0; c<20; c++){
		cin >> vet[c];
	}
	if (codigo == 0){
		return 0;
	}else if (codigo == 1){
		for (int c=0; c<20; c++){
			cout << vet[c] << " ";
		}
	}else if (codigo == 2){
		for (int c=19; c>=0; c--){
			cout << vet[c] << " ";
		}
	}
	return 0;
}
