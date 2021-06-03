#include <iostream>
#include <fstream>
using namespace std;	
	
int main(){
	string result="diagonal";
	int m;
	ifstream arq("matriz.txt");

	if(arq){
		arq >> m;
		
		int matriz[m][m];
		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				arq >> matriz[i][j];
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				if(i!=j){
					if(matriz[i][j] != 0) result = "nao diagonal";
					j=m;
					i=m;
				}else result = "diagonal";
			}
		}
	
		cout << result;
	
	}
	
	return 0;
}
