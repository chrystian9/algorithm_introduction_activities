#include <iostream>
#include <string>
using namespace std;

int main (){
	int n1, n2, cont=0;
	
	cin >> n1;
	string lista1[n1];
	for (int c=0; c<n1; c++){
		cin >> lista1[c];
	}

	cin >> n2;
	string lista2[n2];	
	for (int c=0; c<n2; c++){
		cin >> lista2[c];
	}

	for (int i=0; i<n1; i++){
		for (int j=0; j<n2; j++){
			if(lista2[j] == lista1[i]){
				cout << lista1[i] << endl;
				cont++;
			}
		}
	}
	if (cont == 0){ cout << "NADA" << endl;}
	return 0;
}
