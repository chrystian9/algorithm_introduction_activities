#include <iostream>
using namespace std;

int numeroDivisores(int vetA, int vetB[]){
	int soma=0;
	
	for (int i=0; i < 5; i++){
		if ((vetA % vetB[i]) == 0){
			soma++;
		}
	}
	return soma;
}
	

int main (){
	int vetA[10], vetB[5];
	
	for (int i=0; i < 10; i++){
		cin >> vetA[i];
	}
	for (int i=0; i < 5; i++){
		cin >> vetB[i];
	}

	for (int i=0; i < 10; i++){
		cout << vetA[i] << " ";
		cout << numeroDivisores((vetA[i]), vetB) << endl;
	}
	return 0;
}
