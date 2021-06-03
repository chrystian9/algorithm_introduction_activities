#include <iostream>
#include <string>
using namespace std;

const int NUMCONTAS =  50;
const int NUMCOMPRAS = 50;
const int NUMCLIENTES = 100;

struct compra{
	int codigo, valor;
};

struct conta{
	int codigo;
	compra compras[NUMCOMPRAS];
};

struct cliente{
	int codigo;
	string nome;
	conta contas[NUMCONTAS];
};

bool buscaConta(conta, int, int, int, int);
bool buscaCompra(compra, int, int, int, int);

bool buscaCliente(cliente clientes[], int k, int& pos){
	for(int x=0; x<NUMCLIENTES; x++){
		if(clientes[x].codigo == k){
			pos = x;
			return true;
		}
	}
	return false;
}		

bool buscaConta(conta contas[], int k, int pos){
	for(int x=0; x<NUMCONTAS; x++){
		if(contas[x].codigo == k){
			pos = x;
			return true;
		}
	}
	return false;
}

bool buscaCompra(compra compras[], int k, int pos){
	for(int x=0; x<NUMCOMPRAS; x++){
		if(compras[x].codigo == k){
			pos = x;
			return true;
		}
	}
	return false;
}

int main (){
	int acao;
	bool existe=false;
	cliente clientes[NUMCLIENTES];
	string nome;
	int aux1, aux2, aux3, pos=0;
	
	for(int c=0; c<NUMCLIENTES; c++){  // zera vetor clientes
		clientes[c].codigo=0;
	}
	
	for(int c=0; c<NUMCLIENTES; c++){  // zera vetor contas de todos os clientes
		for(int i=0; i<NUMCONTAS; i++){
			clientes[c].contas[i].codigo=0;
		}
	}
	
	for(int c=0; c<NUMCLIENTES; c++){  // zera vetor compras de todas contas de cada cliente
		for(int i=0; i<NUMCONTAS; i++){
			for(int j=0; j<NUMCOMPRAS; j++){
				clientes[c].contas[i].compras[j].codigo=0;
			}
		}
	}
	
	cin >> acao;
	while (acao != 0){
		
		if(acao == 1){
			cin >> aux1;
			cin >> nome;
			cin.ignore(); // codigo do cliente e nome do cliente				
			if(buscaCliente(clientes, aux1, pos) == true){
				cout << "ERRO" << endl;
			}else{
				for(int c=0; c<NUMCLIENTES; c++){
					if (clientes[c].codigo == 0){
						clientes[c].codigo = aux1;
						clientes[c].nome = nome;
						c=NUMCLIENTES;
					}
				}
				cout << "OK" << endl;
			}
		}else if(acao == 2){
			cin >> aux1 >> aux2;		// codigo do cliente e codigo da conta
			if(buscaCliente(clientes, aux1, pos) == true){   // se achar o cliente
				for(int c=0; c<NUMCLIENTES; c++){
					if(buscaConta(clientes[c].contas, aux2, pos) == true){  // se achar uma conta com o mesmo codigo
						cout << "ERRO" << endl;
						c=NUMCLIENTES;
						existe=true;
					}else{existe=false;}
				}
				if(existe == false){  // se nao existir conta com o mesmo codigo
					for(int c=0; c<NUMCONTAS; c++){
						if(clientes[pos].contas[c].codigo == 0){
							clientes[pos].contas[c].codigo=aux2;
							c=NUMCONTAS;
						}
					}
					cout << "OK" << endl;
				}
			}else{  // se nao existir o cliente
				cout << "ERRO" << endl;
			}	
		}else if(acao == 3){
			cin >> aux1 >> aux2 >> aux3;  // codigo da compra, codigo da conta e valor
			for(int c=0; c<NUMCLIENTES; c++){
				if(buscaConta(clientes[c].contas, aux2, pos) == true){ // se existir a conta
					if(buscaCompra(clientes[c].contas[pos].compras, aux1, pos) == true){  // se existir compra com o mesmo codigo
						cout << "ERRO" << endl;
						c=NUMCLIENTES;
					}else{
						for(int i=0; i<NUMCOMPRAS; i++){
							if(clientes[c].contas[pos].compras[i].codigo == 0){
								clientes[c].contas[pos].compras[i].codigo = aux1;
								clientes[c].contas[pos].compras[i].valor = aux3;
								cout << "OK" << endl;
								c=NUMCLIENTES;
							}
						}
					}
				}else{ cout << "ERRO" << endl;}  // se nao existir a conta
			}
		}else if(acao == 4){
			cin >> aux1;		// codigo do cliente
			if(buscaCliente(clientes, aux1, pos) == true){  // se existir o cliente
				for(int c=0; c<NUMCONTAS; c++){
					for(int i=0; i<NUMCOMPRAS; i++){
						clientes[pos].contas[c].compras[i].codigo = 0;
						clientes[pos].contas[c].compras[i].valor = 0;
					}
					clientes[pos].contas[c].codigo = 0;
				}
				clientes[pos].codigo = 0;
				cout << "OK" << endl;
			}else{ cout << "ERRO" << endl;} // se nao existir o cliente 
		}
		cin >> acao;
	}
	return 0;
}
