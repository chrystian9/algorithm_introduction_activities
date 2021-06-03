#include <iostream>
#include <fstream>
using namespace std;

void realocar(int *vet, int &tam, int &num){
	int *aux = new int[tam];
	aux = vet;
	vet = NULL;
	delete vet;
	tam = tam + 5;
	vet = new int(tam);
	for (int i = 0; i < tam; i++) {
		vet[i] = aux [i];
	}
	aux = NULL;
	delete aux;
	num++;
}

int main(){
	int vet[5];
	int tam=5;
	int aux=0, i=0;
	int num=0;
	
	ifstream arq("dados.bin");
	
	while(vet[i-1] <= 0){
		arq.read((char *) (&aux), sizeof(int));
		vet[i] = aux;
		if(i == tam-1) realocar(vet, tam, num);
		cout << i << " :o i" << endl;
		i++;
	}
	arq.close();
	
	while(vet[i-1] <= 0){
		cin >> aux;
		vet[i] = aux;
		if(i == tam-1) realocar(vet, tam, num);
		i++;
	}
	
	for (int i = 0; i < tam; i++) {
		if(vet[i] > 0){
		//	cout << vet[i] << " ";
		}
	}
	cout << endl << tam << endl << num << endl;
	
	ofstream arq2("dados.bin");
	
	arq2.write((char *) (&aux), sizeof(int));
	arq2.close();
	
	return 0;
	
}
