#include <fstream>
#include <iostream>
using namespace std;

int main(){
	string texto="", nome1, nome2;
	cin >> nome1 >> nome2;
	
	ifstream arq1(nome1); // entrada
	
	if(arq1){
		while(arq1 >> nome1){
			texto = texto + nome1;
		}
	}else cout << "ERRO";
	arq1.close();
	
	ofstream arq2(nome2); //saida

	if(arq2){
		arq2 << texto;
		arq2.close();
	}
	return 0;
}
