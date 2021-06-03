#include <iostream>
using namespace std;

bool testeHarshad(int num){
	int aux, soma=0;
	
	aux = num;
	
	while (aux != 0){
		soma += (aux % 10);
		aux = aux / 10;
	}
	if (num%soma == 0){
		return true;
	}else if (num%soma != 0){
		return false;
	}
	return false;
}

int main (){
	int num;
	
	cin >> num;
	
	if (testeHarshad(num) == 0){
		cout << "false" << endl;
	}else if (testeHarshad(num) == 1){
		cout << "true" << endl;
	}
	return 0;
}
