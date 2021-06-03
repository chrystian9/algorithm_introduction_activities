#include <iostream>
using namespace std;

int main (){
	float num1, num2, resultado;
	char operador;
	
	cin >> num1 >> operador >> num2;
	
	if (operador == '+'){
		resultado = num1 + num2;
	}else if (operador == '-'){
		resultado = num1 - num2;
	}else if (operador == '*'){
		resultado = num1 * num2;
	}else if (operador == '/'){
		if (num2 == 0){
			;
		}else if (num2 != 0){
			resultado = num1 / num2;
		}
	}
	cout << resultado;
	return 0;
}
