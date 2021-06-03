#include <iostream>
using namespace std;

int main (){
	int num, cont=0, numAnterior, resultado;
	
	numAnterior = 0;
	resultado = 1;
	
	while (cont < 5){
		cin >> num;
		
		if (num > numAnterior){
			num = numAnterior;
		}else if (num < numAnterior){
			resultado = 0;
			num = numAnterior;
		}
		cont++;
	}
	
	cout << resultado << numAnterior;
	return 0;
}
