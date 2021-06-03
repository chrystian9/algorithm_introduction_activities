#include <iostream>
using namespace std;

int main (){
	int nA, nB;
	cin >> nA >> nB;
	int vetA[nA], vetB[nB], vetC[nA];
	for (int c=0; c<nA; c++){
		cin >> vetA[c];
	}
	for (int c=0; c<nB; c++){
		cin >> vetB[c];
	}
	int c=0;
	for (int a=0; a<nA; a++){
		for (int b=0; b<nB; b++){
			if (vetA[a] != vetB[b]){
				vetC[c] = vetA[a];
				c++;
			}
		}
	}
	for (int d=0; d>c; d++){
		cout << vetC[d] << " ";
	}
	return 0;
}
