#include <iostream>
#include <fstream>
using namespace std;

void ordena(char vetor[], int tam){  //ordenação por selection sort
    int menor;
    char aux;
    for (int i = 0; i < tam-1; i++) {
		menor = i;
		for (int j = i + 1; j < tam; j++) {
			if (vetor[j] < vetor[menor]){
				menor = j;
			}
		}
   	 aux = vetor[i];
   	 vetor[i] = vetor[menor];
   	 vetor[menor] = aux;
    }
}


int main(){
	int pos=0;
	char letras[26];
	
	ifstream entrada("entrada.txt");
	if(entrada){
		while(entrada >> letras[pos]) pos++;
	}else cout << "ERRO" << endl;
	entrada.close();
	
	ordena(letras, pos);
	
	ofstream saida("saida.txt");
	if(saida){
		for(int c=0; c<pos; c++){
			saida << letras[c];
			if(c+1 != pos) saida << " ";
		}
	}else cout << "ERRO" << endl;
	saida.close();
	
	return 0;
}
