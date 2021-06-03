#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int posA=0, posB=0;
	string dadosA[100], dadosB[100];
	
	ifstream arqA("arquivoA.txt");
	ifstream arqB("arquivoB.txt");
	ofstream arqC("arquivoC.txt");
	
	if(arqA and arqB){
		for(int c=0; c<100; c++){
			if(!arqA.eof()){
				arqA >> dadosA[c];
				posA = c;
			}else c = 100;
		}
		for(int c=0; c<100; c++){
			if(!arqB.eof()){
				arqB >> dadosB[c];
				posB = c;
			}else c = 100;
		}
		arqA.close();
		arqB.close();
			
		for(int c=0; c<100; c++){
			if(c<=posA and c<=posB){
				arqC << dadosA[c] << " " << dadosB[c] << " ";
			}else if(c<=posA){
				arqC << dadosA[c] << " ";
			}else{
				arqC << dadosB[c] << " ";
			}
		}
		arqC.close();
		
	}else cout << "ERRO";
	
	return 0;
}
