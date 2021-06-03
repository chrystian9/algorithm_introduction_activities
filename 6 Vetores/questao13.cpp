#include <iostream>
using namespace std;

int pedidos(int produtos[], int quantProdutos[], int& naoCompletos, int& inexistentes){
	int cliente, codigo, quantidade, aux=0;
	
	cin >> cliente >> codigo >> quantidade;
	for (int i=0; i < 10; i++){
		if (codigo == produtos[i]){
			if (quantProdutos[i] >= quantidade){
				quantProdutos[i] = quantProdutos[i] - quantidade;
			}else{
				naoCompletos++;
			}
		}else{
			aux++;
			if (aux == 10 and cliente != 0){
				inexistentes++;
			}
		}
	}
	if (cliente == 0){
		return 1;
	}else{
		return pedidos(produtos, quantProdutos, naoCompletos, inexistentes);
	}
}

void estoqueAtual(int produtos[], int quantProdutos[]){		
		for (int i=0; i < 10; i++){
			cout << produtos[i] << " " << quantProdutos[i] << endl;
		}
}

int main (){
	int produtos[10], quantProdutos[10], naoCompletos=0, inexistentes=0;
	
	for (int i=0; i < 10; i++){
		cin >> produtos[i];
	}
	for (int i=0; i < 10; i++){
		cin >> quantProdutos[i];
	}
	
	pedidos(produtos, quantProdutos, naoCompletos, inexistentes);
	
	estoqueAtual(produtos, quantProdutos);
	
	cout << inexistentes << endl << naoCompletos << endl;
	
	return 0;
}
