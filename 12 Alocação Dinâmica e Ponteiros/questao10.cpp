#include <iostream>
using namespace std;

struct dezena{   // struct das dezenas sorteadas
	int* dezenas = new int [6];
};

dezena* soma(dezena*, int);

int main (){
	int quant = 0;  // quantidade de dezenas sorteadas
	
	cin >> quant;
	
	dezena* sorteadas = new dezena [quant];
	
	for(int c=0; c<quant; c++){
		for(int d=0; d<6; d++)
			cin >> sorteadas[c].dezenas[d];
	}
	
	dezena* result = soma(sorteadas, quant);
	
	for (int c=0; c<6; c++){
		cout << result->dezenas[c] << " ";
	}
	cout << endl;
	
	delete[] sorteadas;
	delete[] result;
	
	return 0;
}

dezena* soma (dezena* sorteadas, int quant){
	int soma[quant] = {0};
	int aux = 0;
	dezena* result = NULL;
	
	for(int c=0; c<quant; c++){
		for(int d=0; d<6; d++){
			soma[c] += sorteadas[c].dezenas[d];
		}	
		if(quant == 0){  // inicia a comparação entre as somas
			aux = soma[c];
			result = &sorteadas[c];
		}
		if(soma[c] > aux){
			aux = soma[c];
			result = &sorteadas[c];
		}
	}
	
	return result;
}
