#include <fstream>
#include <iostream>
using namespace std;

int main(){
	string dados, nome;
	cin >> nome;
	
	ofstream arq;
	arq.open(nome);
	
	cin >> dados;
	arq << dados;
	arq.close();
	
	ifstream arquivo(nome);
	if(arquivo){
		while(arquivo >> dados){
			cout << dados;
		}
		arq.close();
	}
	return 0;
}
