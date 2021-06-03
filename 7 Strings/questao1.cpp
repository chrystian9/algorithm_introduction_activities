#include <iostream>
#include <string>
using namespace std;

int main (){
	int n;
	cin >> n;
	
	int tam[n], maior=0;
	tam[0] = 0;
	string vet[n];
	
	for (int c=0; c<n; c++){
		cin >> vet[c];
		cin.ignore();
		tam[c] = vet[c].size();
		if (c==0){maior = tam[c];}
		if (tam[c] > maior){maior = tam[c];}
	}
	
	for (int c=0; c<n; c++){
		for (int i=0; i<(maior - tam[c]); i++){
			cout << "*";
		}
		cout << vet[c] << endl;
	}
	
	return 0;
}
