#include <iostream>
using namespace std;

int main (){
	int numVendidos, ingresso, cont=0, resultado=0;
	
	cin >> numVendidos;
	while (cont<numVendidos){
		cin >> ingresso;
		cont++;
		if ((cont==ingresso) and (resultado == 0)){
			resultado = ingresso;
		}
	}
	cout << resultado << endl;
	return 0;
}
