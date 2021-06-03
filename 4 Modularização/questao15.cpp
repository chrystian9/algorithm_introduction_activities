#include <iostream>
using namespace std;

float soma(int n){
	float soma=0, cont=0;
	
	while (cont <= n){
	soma = soma + ((cont * (cont + 1)) / float(cont + 3));
	cont++;
	}
	
	return soma;
}

int main (){
	int numParcelas;
	
	cin >> numParcelas;
	
	cout << soma(numParcelas) << endl;
	
	return 0;
}
