#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string palavras[50];
	int num[50], pos=0;
	
	ifstream open_palavras("palavras.txt");
	if(palavras){
		while(open_palavras >> palavras[pos]) pos++;
	}else cout << "ERRO" << endl;
	open_palavras.close();
	
	pos=0;
	
	ifstream numeros("numeros.txt");
	if(numeros){
		while(numeros >> num[pos]) pos++;
	}else cout << "ERRO" << endl;
	numeros.close();

	ofstream frase("frase.txt");
	if(frase){
		for(int c=0; c<pos; c++){
			frase << palavras[num[c]-1];
			if(c+1 != pos) frase << " ";
		}
	}else cout << "ERRO" << endl;
	frase.close();
	
	return 0;
}
