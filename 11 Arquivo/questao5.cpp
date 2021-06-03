#include <iostream>
#include <fstream>
using namespace std;	
	
int main(){
	string result;
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
				if(matriz[i][j] == matriz[j][i]) result = "simetrica";
				else{ 
					result = "nao simetrica";
					j=m;
					i=m;
				}
			}
		}
	
		cout << result << endl;
	
	}else cout << "ERRO";
	
	return 0;
}
