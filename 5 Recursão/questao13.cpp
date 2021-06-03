#include <iostream>
using namespace std;

int busca(int v[],int num,int cont,int n){
	if (v[cont] == num){
		return 1;
	}else if(cont < n and v[cont] != num){
		return busca(v, num, cont+1, n);
	}else if(cont == n and v[cont] != num){
		return 0;
	}
}


int main(){
	int n, num, cont=0;
	cin >> n;
	
	int vet[n];
	while (cont < n){
		cin >> vet[cont];
		cont++;
	}
	cin >> num;
	cont = 0;
	
	cout << busca(vet, num, cont, n) << endl;
	return 0;
}
