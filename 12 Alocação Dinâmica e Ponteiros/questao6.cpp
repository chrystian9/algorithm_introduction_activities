#include <iostream>
using namespace std;

void vetorResultado (char *result, char caracter){
	int tam = sizeof result;
	char *aux = new char[tam];
	
	aux = result;
	result = NULL;
	delete[] result;
	result = new char [tam + 1];
	
	for(int c=0; c < tam+1; c++){
		if(c == tam){
			result[c] = caracter;
		}else{
			result[c] = aux[c];
		}
	}
	
	delete[] aux;
}
		
int main (){
	int num1, num2;
	
	cin >> num1 >> num2;
	
	char * vetor1 = new char [num1];
	char * vetor2 = new char [num2];
	char * result = NULL;
	
	for(int c = 0; c < num1; c++){
		cin >> vetor1[c];
	}
	
	bool test;
	for(int c = 0; c < num2; c++){
		cin >> vetor2[c];
		for(int i = 0; i < num1; i++){
			if (vetor1[i] == vetor2[c]){ test = true;
			}else{ test = false; }
		}
		if(test == false) vetorResultado(result, vetor2[c]);
	}
		
	delete[] vetor1;
	delete[] vetor2;
	
	int tam = sizeof result;
	for(int c=0; c < tam; c++)
		cout << result[c];
	
	delete[] result;
	
	return 0;
}
		
