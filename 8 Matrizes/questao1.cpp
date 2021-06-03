#include <iostream>
using namespace std;

int main (){
	char notas[11][8];
	float nota=0;
	int aprovados=0;
	
	for (int i=0; i<11; i++){
		for (int j=0; j<8; j++){
			cin >> notas[i][j];
		}
	}
	
	for (int i=1; i<11; i++){
		for (int j=0; j<8; j++){
			if (notas[i][j] == notas[0][j]){
				nota++;
			} 
		}
		nota = (nota*100)/8;
		cout << nota << endl;
		if (nota > 60){
			aprovados++;
		}
		nota = 0;
	}
	
	cout << (aprovados * 100)/10 << endl;
	return 0;
}
