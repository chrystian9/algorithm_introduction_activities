#include <iostream>
#include <string>
using namespace std;

struct Times{
	string nome;
	int pontos, vitorias, gols;
};

void ordena(struct Times vet[], int tam){
	Times pivo;
	int j;
	for(int i=1; i<tam; i++){
		pivo.nome = vet[i].nome;
		pivo.pontos = vet[i].pontos;
		pivo.vitorias = vet[i].vitorias;
		pivo.gols = vet[i].gols;
		j = i-1;	
		while((j>=0) and (pivo.pontos >= vet[j].pontos)){
			if(pivo.pontos == vet[j].pontos){
				if(pivo.vitorias == vet[j].vitorias){
					if(pivo.gols > vet[j].gols){
						vet[j+1].nome = vet[j].nome;
						vet[j+1].pontos = vet[j].pontos;
						vet[j+1].vitorias = vet[j].vitorias;
						vet[j+1].gols = vet[j].gols;
						j--;
					}
				}else if(pivo.vitorias > vet[j].vitorias){
					vet[j+1].nome = vet[j].nome;
					vet[j+1].pontos = vet[j].pontos;
					vet[j+1].vitorias = vet[j].vitorias;
					vet[j+1].gols = vet[j].gols;
					j--;
				}
			}else{
				vet[j+1].nome = vet[j].nome;
				vet[j+1].pontos = vet[j].pontos;
				vet[j+1].vitorias = vet[j].vitorias;
				vet[j+1].gols = vet[j].gols;
				j--;
			}
		}
		vet[j+1].nome = pivo.nome;
		vet[j+1].pontos = pivo.pontos;
		vet[j+1].vitorias = pivo.vitorias;
		vet[j+1].gols = pivo.gols;
	}
}
			
int main (){
	int n;
	cin >> n;
	Times time[n];
	
	for(int c=0; c<n; c++){
		cin >> time[c].nome >> time[c].pontos >> time[c].vitorias >> time[c].gols;
	}
	
	ordena(time, n);
	
	for(int c=0; c<n; c++){
		cout << time[c].nome << " " << time[c].pontos << " " << time[c].vitorias << " " << time[c].gols << endl;
	}
	return 0;
}	
