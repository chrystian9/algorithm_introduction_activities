#include <iostream>
using namespace std;

int main (){
	int num, c=1, n=0;
	bool cont=false;
	cin >> num;
	while(cont == false){
		n++;
		if(n + c > num){
			cont = true;
		}else c = c+n;
	}
	c=1;
	int matriz[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(j<=i){
				matriz[i][j] = c;
				c++;
			}else{ matriz[i][j] = 0;}
		}
	}

	for (int i=0; i<n; i++){
		if(i == n-1){ 
			cout << matriz[n-1][i] << endl;
		}else {cout << matriz[n-1][i] << "--";}
	}
	return 0;
}
