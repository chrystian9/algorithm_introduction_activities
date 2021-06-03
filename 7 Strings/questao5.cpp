#include <iostream>
#include <string>
using namespace std;

int fHash(string p){
	const int UMPRIMO = 13, M = 10;
	long hash = 0;

	for (unsigned j = 0; j < p.size(); j++) {
        hash = (UMPRIMO * hash + p[j]) % M;   
    }
    return hash;
}

int main(){
	int n, soma=0;
	cin >> n;
	int hash[n];
	string palavras[n];
	
	for(int c=0; c<n; c++){
		cin >> palavras[c];
		hash[c] = fHash(palavras[c]);
		soma = soma + fHash(palavras[c]);
	}
	for(int c=0; c<n; c++){
		cout << hash[c] << " ";
	}
	cout << soma << endl;
	return 0;
}
