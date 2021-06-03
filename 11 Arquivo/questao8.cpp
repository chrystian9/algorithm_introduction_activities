#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct registro{
	int matricula;
	int nota;
};

void leitura(registro registros[], float& maior, int n){
	ifstream entrada("notas.txt");
	
	for(int c=0; c<n; c++){
		if(entrada >> registros[c].matricula){
			entrada >> registros[c].nota;
			if(registros[c].nota > maior){
				maior = registros[c].nota;
			}
		}
	}
	entrada.clear();
	entrada.close();
}
	
void normaliza(registro registros[],float maior, int n){
	maior = 100/maior;
	for(int c=0; c<n; c++){
		if((float(registros[c].nota * maior)-floor(registros[c].nota * maior)) >= 0.5){
			registros[c].nota = ceil(registros[c].nota * maior);
		}else{
			registros[c].nota = floor(registros[c].nota * maior);
		}
	}
}

void escreve(registro registros[], int n){
	ofstream saida("notas.txt");
	for(int c=0; c<n; c++){
		saida << registros[c].matricula << " " << registros[c].nota << endl;
	}
	saida.clear();
	saida.close();
}
	
int main(){
	float maior=0;
	int n=0;
	
	ifstream aux("notas.txt");
	if(aux){
		while(aux >> maior){
			n++;
		}
		maior=0;
	}else cout << "ERRO";
	aux.clear();
	aux.close();
	n = n/2;

	registro registros[n];

	leitura(registros, maior, n);
	normaliza(registros, maior, n);
	escreve(registros, n);
	
	return 0;
}
