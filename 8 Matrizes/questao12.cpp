#include <iostream>
using namespace std;

int main (){
	int n, m;
	cin >> n >> m;
	
	float matriz[n][m];
	float num1, num2, soma=0;
		
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> matriz[i][j];
		}
	}
	cin >> num1 >> num2;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (i%2 == 0){
				matriz[i][j] = matriz[i][j] * num1;
			}
			if (j%2 != 0){
				matriz[i][j] = matriz[i][j] * num2;
			}
			soma = soma + matriz[i][j];
		}
	}
	cout << soma << endl;
	return 0;
}
