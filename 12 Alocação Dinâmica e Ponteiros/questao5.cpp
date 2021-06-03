#include <iostream>
using namespace std;

int main(){
	char vet1[100];
	char vet2[100];
	int aux1, aux2;
	
	for(int c=0; c<100; c++){
		cin >> vet1[c];
		if(vet1[c] == '/n'){
			aux1 = c + 1;
			c = 100;
		}
	}
	for(int c=0; c<100; c++){
		cin >> vet2[c];
		if(vet2[c] == '/n'){
			aux2 = c + 1;
			c = 100;
		}
	}
	
	char *result = new char[(aux1 + aux2)];
	
	for(int c=0; c<(aux1+aux2); c++){
		if(c < aux1)
			result[c] = vet1[c];
		else result[c] = vet2[c];
	}
	
	for(int c=0; c<(aux1+aux2); c++)
		cout << result[c] << " ";
		
	cout << endl;
	
	return 0;
}
	
