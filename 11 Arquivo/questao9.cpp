#include <iostream>
#include <fstream>
using namespace std;

int main (){
	int cont=0;
	string nome, aux, palavra;
	cin >> nome >> palavra;
	
	ifstream arq(nome);
	
	if(arq){
		while(arq >> aux){
			if(aux == palavra){
				cont++;
			}
		}
	}else cout << "ERRO" << endl;
	
	cout << cont << endl;
	return 0;
}
