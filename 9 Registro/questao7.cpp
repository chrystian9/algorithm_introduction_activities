#include <iostream>
using namespace std;

struct cestas{
	string name;
	int quant;
};

struct vendas{
	string visitante, cesta;
};

int main(){
	int nTipos; //numero de tipos de cestas
	int num; //numero de compradores
	int quantVendida=0;
	cin >> nTipos;
	
	cestas tipoCesta[nTipos];
	for (int c=0; c<nTipos; c++){
		cin >> tipoCesta[c].name >> tipoCesta[c].quant;
	}
	
	cin >> num;
	vendas compradores[num];
	for (int c=0; c<num; c++){
		cin >> compradores[c].visitante >> compradores[c].cesta;
		for (int i=0; i<nTipos; i++){
			if (tipoCesta[i].name == compradores[c].cesta){
				quantVendida = quantVendida + tipoCesta[i].quant;
			}
		}
	}
	cout << quantVendida << endl;
	return 0;
}
