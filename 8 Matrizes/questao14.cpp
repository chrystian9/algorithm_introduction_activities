#include <iostream>
using namespace std;

int main (){
	int bingo[5][5], cont=0;
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cin >> bingo[i][j];
		}
	}
	
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			if(bingo[i][j] == 1){
				cont++;
			}
		}
		if (cont == 5){
			cout << 1 << endl;
			return 0;
		}
		cont = 0;
	}
	for (int j=0; j<5; j++){
		for (int i=0; i<5; i++){
			if(bingo[i][j] == 1){
				cont++;
			}
		}
		if (cont == 5){
			cout << 2 << endl;
			return 0;
		}
		cont = 0;
	}
	for (int j=0; j<5; j++){
		if(bingo[(4-j)][j] == 1){
			cont++;
		}
	}
	if (cont == 5){
		cout << 4 << endl;
		return 0;
	}
	cont = 0;
	for (int i=0; i<5; i++){
		if(bingo[i][i] == 1){
			cont++;
		}
	}
	if (cont == 5){
		cout << 3 << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
