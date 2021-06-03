#include <iostream>
using namespace std;

int main (){
	int n, menor[2]; //vetor menor, onde elemento 0 igual ao menor valor e elemento 1 igual a linha do menor valor.
	cin >> n;
	
	int matriz[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> matriz[i][j];
			if (i == 0 and j == 0){
				menor[0] = matriz[i][j];
				menor[1] = i;
			}
			if (matriz[i][j] < menor[0]){
				menor[0] = matriz[i][j];
				menor[1] = i;
			}
		}
	}
	cout << menor[1] << endl;
	return 0;
}
