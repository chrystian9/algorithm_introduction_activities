#include <iostream>
using namespace std;

struct atletas{   // struct para guardar os tempos de cada atleta
	float atleta;
	float diferenca;
};

int main (){
	atletas *tempos = new atletas [8];  // vetor com os tempos
	atletas *ganhador = new atletas;   // tempo do ganhador
	
	ganhador->atleta = 0;
	
	for(int c=0; c < 8; c++){
		cin >> tempos[c].atleta;
		if(c == 0) 	ganhador->atleta = tempos[c].atleta;
		if(tempos[c].atleta < ganhador->atleta){
			ganhador->atleta = tempos[c].atleta;
		}
	}
	
	for(int c=0; c < 8; c++){
		if(tempos[c].atleta == ganhador->atleta){
			tempos[c].diferenca = tempos[c].atleta;
		}else{
			tempos[c].diferenca = tempos[c].atleta - ganhador->atleta;
		}
		cout << tempos[c].diferenca << endl;
	}
	
	delete[] tempos;
	delete[] ganhador;
	
	return 0;
}
