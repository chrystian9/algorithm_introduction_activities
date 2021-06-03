#include <iostream>
using namespace std;

int main (){
	int m[10][5];
	
	for(int i=0; i<10; i++){
		for(int j=0; j<5; j++){
			cin >> m[i][j];
		}
	}
	int cont=0;
	for(int c=0; c<=20; c++){
		for(int i=0; i<10; i++){
			for(int j=0; j<5; j++){
				if (m[i][j] == c){
					cont++;
				}
			}
		}
		if (cont > 1){
			cout << c << " " << cont << endl;
			cont = 0;
		}
	}
	
	return 0;
}
