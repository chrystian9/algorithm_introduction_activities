#include <iostream>
#include <string>
using namespace std;

struct vilao{
	string nome, alvo;
};

struct plano{
	string nome, nome_vilao;
	int prejuizo;
};

int main (){
	int numV, numP;
	bool existe=false;
	string alvo;
	
	cin >> numV;
	vilao viloes[numV];
	
	for(int c=0; c<numV; c++){
		cin >> viloes[c].nome >> viloes[c].alvo;
	}
	
	cin >> numP;
	plano planos[numP];
	
	for (int c=0; c<numP; c++){
		cin >> planos[c].nome >> planos[c].nome_vilao >> planos[c].prejuizo;
	}
	
	cin >> alvo;
	for (int c=0; c<numV; c++){
		if(viloes[c].alvo == alvo){
			for(int i=0; i<numP; i++){
				if(planos[i].nome_vilao == viloes[c].nome){
					cout << planos[i].nome << " " << planos[i].prejuizo << endl;
					existe = true;
				}
			}
		}
	}
	if(existe == false){ cout << -1;}
	return 0;
}
