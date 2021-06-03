#include <iostream>
using namespace std;

int buscaCaracter(char vet[], char caracter, int num, int i){
	
	if(i > num){
		return -1;
	}else if (caracter == vet[i]){
		return i;
	}else{
		i++;
		return buscaCaracter(vet, caracter, num, i);
	}
}

int main (){
	int num, i=0;
	
	cin >> num;
	
	char vet[num], caracter;
	
	for (int i=0; i < num; i++){
		cin >> vet[i];
	}
	
	cin >> caracter;
	
	cout << buscaCaracter(vet, caracter, num, i) << endl;
	
	return 0;
}
