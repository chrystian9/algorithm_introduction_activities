#include <iostream>
using namespace std;

int cN_K(int numN, int numK){
	int resultado;
	if (numK == 0 or numK == numN){
		return 1;
	}else{
		resultado = cN_K((numN-1), (numK-1)) + cN_K((numN-1), numK);
		return resultado;
	}
}

int main (){
	int numN, numK;
	
	cin >> numN >> numK;
	
	cout << cN_K(numN, numK) << endl;
	
	return 0;
}
