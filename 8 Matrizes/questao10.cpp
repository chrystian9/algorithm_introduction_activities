#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	
	float principal = 0, secundaria = 0;

	int matriz[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> matriz[i][j];
			if (i >= j){
				principal = principal + matriz[i][j];
			}
			if (j >= n-(i+1)){
				secundaria = secundaria + matriz[i][j];
			}	
		}
	}
	
	cout << (principal / (((n*(n-1))/2)+n)) << endl << (secundaria / (((n*(n-1))/2)+n)) << endl;
	return 0;
}
