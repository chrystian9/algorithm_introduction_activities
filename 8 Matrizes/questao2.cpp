#include <iostream>
using namespace std;

int main(){
	int n; 
	float media=0;
	cin >> n;
	
	float m[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> m[i][j];
			if (i == j){
				media = media + m[i][j];
			}
		}
	}
	media = media/n;
	cout << media << endl;
	return 0;
}

