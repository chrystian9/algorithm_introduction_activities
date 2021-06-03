#include <iostream>
using namespace std;

int minT(int numN){
	int resultado;
	if (numN == 1){
		return 1;
	}else{
		resultado = ((2 * (minT((numN - 1)))) + 1);
		return resultado;
	}
}

int main (){
	int numN;
	
	cin >> numN;
	
	cout << minT(numN) << endl;
	
	return 0;
}
