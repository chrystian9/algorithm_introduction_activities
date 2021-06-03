#include <iostream>
using namespace std;

float psi(int numN){
	float resultado;
	
	if (numN == 1){
		resultado = 1;
	}else if (numN > 1){
		resultado = 1 + (1 / psi(numN - 1));
	}
	return resultado;
}

int main (){
	int numN;
	
	cin >> numN;
	
	cout << psi(numN) << endl;
	
	return 0;
}
