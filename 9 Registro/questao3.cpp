#include <iostream>
#include <string>
using namespace std;
struct gnomo{
	int entrada[7], saida[7];
	int timeJob=0;
	string nome;
	bool apto;
};

int main (){
	int gnomos;
	cin >> gnomos;
	gnomo individuo[gnomos];
	for (int c=0; c<gnomos; c++){
		getline(cin,individuo[c].nome);
		cin.ignore();
		for (int d=0; d<7; d++){
			cin >> individuo[c].entrada[d] >> individuo[c].saida[d];
			individuo[c].timeJob = individuo[c].timeJob + (individuo[c].saida[d] - individuo[c].entrada[d]);
		}
		if (individuo[c].timeJob < 70){
			individuo[c].apto = true;
		}else{ individuo[c].apto = false;}
	}
	for (int c=0; c<gnomos; c++){
		if(individuo[c].apto == true){
			cout << individuo[c].nome << " " << individuo[c].timeJob << endl;
		}
	}
	return 0;
}
