#include <iostream>
using namespace std;

int main (){
	int vetA[5], vetB[5], soma=0;
	for (int c=0; c<5; c++){
		cin >> vetA[c];
	}
	for (int c=0; c<5; c++){
		cin >> vetB[c];
	}
	int b=4;
	for (int a=0; a<5; a++){
		soma = soma + (vetA[a] - vetB[b]);
		b--;
	}
	cout << soma << endl;
	return 0;
}
