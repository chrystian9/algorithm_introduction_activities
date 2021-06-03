#include <iostream>
using namespace std;

struct noh{
    int dado;
    noh* prox;
};

int main() {
    int i, total, soma=0;
    int ptrV[5] = {5,4,3,2,1};

    noh *vetor = new noh[5];
    i=0;
    while(i < 5) {
        vetor[i].dado = ptrV[i];
        soma += vetor[i].dado;
        if (i != 4){
			vetor[i].prox = ptrV[i+1]; //não consegui entender essa parte, perdão
        } else{
			vetor[i].prox = NULL;
        }
        i++;
     }
       
    int *ptrValor = &total;

    *ptrValor = soma*2;
    
    i=0;
    while(i < 5){
		if(vetor[i].prox)
			cout << vetor[i].prox << " " << *ptrValor << endl;
		else cout << 0 << " " << *ptrValor << endl;
		i--;
	}

    ptrValor = NULL;
    vetor = NULL;
    
	delete ptrValor;
	delete vetor;
	
	return 0;
}
