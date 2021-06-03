#include <iostream>
using namespace std;

int main (){
	int dimensoes, cont=0, cont1=0;
	cin >> dimensoes;
	
	while (cont < dimensoes){
		if ((cont % 2) != 0){
			cont1=0;
			while (cont1 < dimensoes){
				if ((cont1 % 2) != 0){
					cout << ".";
				}else if ((cont1 % 2) == 0){
					cout << "#";
				}
				cont1 = cont1 + 1;
			}
		}
		if ((cont % 2) == 0){
			cont1=0;
			while (cont1 < dimensoes){
				if ((cont1 % 2) != 0){
					cout << "#";
				}else if ((cont1 % 2) == 0){
					cout << ".";
				}
				cont1 = cont1 + 1;
			}
		}
	cout << endl;
	cont++;
	}
	return 0;
}
