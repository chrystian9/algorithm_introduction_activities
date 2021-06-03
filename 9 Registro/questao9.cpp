#include <iostream>
using namespace std;

struct conta{
	string name;
	int codigo;
};

struct transacao{
	string descricao;
	float valor;
	int codigo_conta;
};


int main(){
	conta contas[20];
	transacao operation[100];
	int estrato[20];
	
	for (int c=0; c<20; c++){
		cin >> contas[c].codigo;
		if (contas[c].codigo != -1){
			cin >> contas[c].name;
		}else{c = 20;}
	}
	
	for (int c=0; c<100; c++){
		cin >> operation[c].codigo_conta;
		if (operation[c].codigo_conta != -1){
			cin >> operation[c].descricao >> operation[c].valor;
		}else{c = 100;}
	}
	
	for (int c=0; c<20; c++){
		cin >> estrato[c];
		if(estrato[c] == -1){c = 20;}
	}
	
	for (int c=0; c<20; c++){
		for(int i=0; i<20; i++){
			if(contas[i].codigo == estrato[c]){
				cout << contas[i].name << endl;
				i = 20;
			}
		}
		for(int i=0; i<100; i++){
			if(operation[i].codigo_conta == estrato[c]){
				cout << operation[i].descricao << " " << operation[i].valor << endl;
			}
		}
		if (estrato[c+1] == -1){c = 20;}
	}
	return 0;
}
