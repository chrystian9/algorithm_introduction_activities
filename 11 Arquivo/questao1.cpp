#include <fstream>
#include <iostream>
using namespace std;

int main(){
	string dados, nome;
	cin >> nome;
	
	ifstream arq(nome);
	
	if(arq){
		while(arq >> dados){
			cout << dados;
		}
		arq.close();
	}else{
		cout << "Nao foi possivel abrir o arquivo" << endl;
	}
	return 0;
}
