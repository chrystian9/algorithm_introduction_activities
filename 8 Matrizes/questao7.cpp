#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int n, m, nota=0;
	cin >> n >> m;
	
	char gabarito[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> gabarito[i][j];
		}
	}
	
	char prova[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> prova[i][j];
			if (prova[i][j] == gabarito[i][j]){
				nota++;
			}
		}
	}
	cout << (nota/m) << endl;
	return 0;
}
