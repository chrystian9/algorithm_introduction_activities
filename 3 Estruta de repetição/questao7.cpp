#include <iostream>
using namespace std;

int main (){
	int numN, cont=0, soma=0;
	
	cin >> numN;
	
	if (numN >= 2){
		while (cont != numN){
			cont++;
		
			if (numN == cont){
				soma = soma + cont;
				cout << cont << "=";
			}else if ((numN % cont) == 0){
				soma = soma + cont;
				cout << cont << "+";
			}
		}
		cout << soma << endl;
	}
	return 0;
}
