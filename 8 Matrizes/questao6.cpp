#include <iostream>
using namespace std;

int main (){
	int n, m;
	cin >> n >> m;
	
	int matriz[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> matriz[i][j];
		}
	}
	
	if((n-1) % 2 == 0){
		for(int i=(n-1); i>=0; i--){
			if(i % 2 == 0){
				for(int j=0; j<m; j++){
					cout << matriz[i][j] << " ";
				}
			}else{
				for(int j=(m-1); j>=0; j--){
					cout << matriz[i][j] << " ";
				}
			}
		}
	}else{
		for(int i=(n-1); i>=0; i--){
			if(i % 2 == 0){
				for(int j=(m-1); j>=0; j--){
					cout << matriz[i][j] << " ";
				}
			}else{
				for(int j=0; j<m; j++){
					cout << matriz[i][j] << " ";
				}
			}
		}
	}
	return 0;
}
