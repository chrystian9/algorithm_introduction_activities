#include <iostream>
using namespace std;

int main (){
	int m, n, aux;
	bool result=false;
	cin >> m;
	
	int **matriz = new int*[m];
	
	cin >> n;
	
	for(int i=0; i<m; i++)
		matriz[i] = new int[n];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			cin >> matriz[i][j];
	}
	cin >> aux;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			if(matriz[i][j] == aux) result = true;
	}
	
	if(result == true) cout << 1 << endl;
	else cout << 0 << endl;

	for(int i=0; i<m; i++)
		delete[] matriz[i];

	delete[] matriz; 
		
	return 0;
}
