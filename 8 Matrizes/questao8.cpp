#include <iostream>
using namespace std;

int main (){
	int n, m, quad, soma=0;
	cin >> n >> m;
	
	int matriz[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> matriz[i][j];
		}
	}
	
	int n2, m2;
	cin >> n2 >> m2 >> quad;
	
	if(quad == 1){
		for(int i=0; i<n2; i++){
			for(int j=0; j<m2; j++){
				soma = soma + matriz[i][j];
			}
		}
	}else if(quad == 2){
		for(int i=0; i<n2; i++){
			for(int j=(m-1); j>m2; j--){
				soma = soma + matriz[i][j];
			}
		}
	}else if(quad == 3){
		for(int i=(n-1); i>n2; i--){
			for(int j=0; j<m2; j++){
				soma = soma + matriz[i][j];
			}
		}
	}else if(quad == 4){
		for(int i=(n-1); i>n2; i--){
			for(int j=(m-1); j>m2; j--){
				soma = soma + matriz[i][j];
			}
		}
	}
	cout << soma << endl;
	return 0;
}
