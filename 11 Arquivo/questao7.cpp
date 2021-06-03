#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int pos=0;
	string dadosA[100], dadosB[100];
	
	ifstream arqA("arquivoA.txt");
	ifstream arqB("arquivoB.txt");
	ofstream arqC("arquivoC.txt");
	
	if(arqA and arqB){
		for(int c=0; c<100; c++){
			if(!arqA.eof()){
				arqA >> dadosA[c];
			}else c = 100;
		}
		for(int c=0; c<100; c++){
			if(!arqB.eof()){
				arqB >> dadosB[c];
				pos = c;
			}else c = 100;
		}
		arqA.close();
		arqB.close();
			
		for(int c=0; c<100; c++){
			if(pos>=0){
				arqC << dadosA[c] << " " << dadosB[pos] << " ";
				pos--;
			}else c = 100;
		}
		arqC.close();
		
	}else cout << "ERRO";
	
	return 0;
}
