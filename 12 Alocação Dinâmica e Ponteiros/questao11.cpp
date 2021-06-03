#include <iostream>
using namespace std;

int main (){
	int tam;  // tamanho da matriz quadrada
	char **matriz = NULL;
	
	cin >> tam;
	
	matriz = new char*[tam];
	
	for(int c=0; c<tam; c++)
		matriz[c] = new char[tam];
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			cin >> matriz[i][j];
		}
	}
	
	int quant;  //quantidade de palavras
	char **palavras = new char*[quant];
	
	for(int c=0; c<quant; c++){
		cin >> palavras[c];
	}
	
	
