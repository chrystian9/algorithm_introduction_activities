#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int tabela[5][5];
	int num[10];
	int cont=0;
	bool result=false;
	
	ifstream entrada("entrada.txt");
	
	if(entrada){
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				entrada >> tabela[i][j];
			}
		}
		for(int c=0; c<10; c++){
			entrada >> num[c];
		}
	}else cout << "ERRO" << endl;
	entrada.close();
	
	for(int i=0; i<5; i++){        // caso linha
		for(int j=0; j<5; j++){
			for(int c=0; c<10; c++){
				if(tabela[i][j] == num[c] or tabela[i][j] == -1){
					cont++;
					c=10;
				}
			}
			if(cont == 5){
				cout << 1 << endl;
				result = true;
			}
		}
		cont = 0;
	}

	for(int j=0; j<5; j++){        // caso coluna
		for(int i=0; i<5; i++){
			for(int c=0; c<10; c++){
				if(tabela[i][j] == num[c] or tabela[i][j] == -1){
					cont++;
					c = 10;
				}
			}
			if(cont == 5){
				cout << 2 << endl;
				result = true;
			}
		}
		cont = 0;
	}

	for(int i=0; i<5; i++){        // caso diagonal principal
		for(int c=0; c<10; c++){
			if(tabela[i][i] == num[c] or tabela[i][i] == -1){
				cont++;
				c = 10;
			}
		}
		if(cont == 5){
			cout << 3 << endl;
			result = true;
		}
	}
	cont = 0;
	
	for(int j=0; j<5; j++){        // caso diagonal secundaria
		for(int c=0; c<10; c++){
			if(tabela[4-j][j] == num[c] or tabela[4-j][j] == -1){
				cont++;
				c = 10;
			}
		}
		if(cont == 5){
			cout << 4 << endl;
			result = true;
		}
	}
	
	if(result == false) cout << -1 << endl;
	
	return 0;
}		
