#include <iostream>
using namespace std;

struct aluno{
	int id;
	int matricula;
};

void ordena(aluno vet[], int tam){
	aluno pivo;
	int j;
	for(int i=1; i<tam; i++){
		pivo.id = vet[i].id;
		pivo.matricula = vet[i].matricula;
		j = i-1;
		while((j>=0) and (pivo.id < vet[j].id)){
			vet[j+1].id = vet[j].id;
			vet[j+1].matricula = vet[j].matricula;
			j--;
		}
		vet[j+1].id = pivo.id;
		vet[j+1].matricula = pivo.matricula;
	}
}

int buscaBinaria(aluno vet[], int k, int posInicial, int posFinal){
	int meio=(posFinal + posInicial)/2;
	
	if(vet[meio].id == k){
		return meio;
	}else if(posInicial < posFinal){
		if(vet[meio].id < k) return buscaBinaria(vet, k, meio+1, posFinal);
		else return buscaBinaria(vet, k, posInicial, meio-1);
	}else{ return -1;}
}

int main (){
	int n, aux;
	cin >> n;
	aluno alunos[n];
	for(int c=0; c<n; c++){
		cin >> alunos[c].id >> alunos[c].matricula;
	}
	int ids[4];
	for(int c=0; c<4; c++){
		cin >> ids[c];
	}
	
	ordena(alunos, n);
	for(int c=0; c<n; c++){
		cout << alunos[c].id << " ";
	}
	cout << endl;
	
	for(int c=0; c<4; c++){
		aux = buscaBinaria(alunos, ids[c], 0, n);
		if(aux == -1) cout << 0 << endl;
		else cout << alunos[aux].matricula << endl;
	}
	
	return 0;
}
	
	
