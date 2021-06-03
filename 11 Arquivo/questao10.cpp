#include <iostream>
#include <fstream>
using namespace std;

int main (){
	int n, acertos=0, posI, posJ;
	ifstream entrada("entrada.txt");
	
	if(entrada){
		entrada >> n;
	}else cout << "ERRO" << endl;
	
	int matriz[n][n];
	
	if(entrada){
		for(int i=0; i < n; i++){
			for(int j=0; j < n; j++){
				entrada >> matriz[i][j];
				if(matriz[i][j] == 1){
					posI = i;
					posJ = j;
				}
			}
		}
	}else cout << "ERRO" << endl;
	entrada.close();

	if(matriz[posI-2][posJ-1] == 2 and (posI-2 >= 0 and posJ-1 >= 0) and (posI-2 < n and posJ-1 < n) )
		acertos++;
	if(matriz[posI-2][posJ+1] == 2 and (posI-2 >= 0 and posJ+1 >= 0) and (posI-2 < n and posJ+1 < n) )
		acertos++;
	if(matriz[posI+2][posJ-1] == 2 and (posI+2 >= 0 and posJ-1 >= 0) and (posI+2 < n and posJ-1 < n) )
		acertos++;
	if(matriz[posI+2][posJ+1] == 2 and (posI+2 >= 0 and posJ+1 >= 0) and (posI+2 < n and posJ+1 < n) )
		acertos++;
	if(matriz[posI-1][posJ-2] == 2 and (posI-1 >= 0 and posJ-2 >= 0) and (posI-1 < n and posJ-2 < n) )
		acertos++; 
	if(matriz[posI+1][posJ-2] == 2 and (posI+1 >= 0 and posJ-2 >= 0) and (posI+1 < n and posJ-2 < n) )
		acertos++; 
	if(matriz[posI-1][posJ+2] == 2 and (posI-1 >= 0 and posJ+2 >= 0) and (posI-1 < n and posJ+2 < n) )
		acertos++; 
	if(matriz[posI+1][posJ+2] == 2 and (posI+1 >= 0 and posJ+2 >= 0) and (posI+1 < n and posJ+2 < n) )
		acertos++;
	
	cout << acertos << endl;
	
	return 0;
}
