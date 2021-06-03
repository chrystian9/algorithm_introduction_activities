#include <iostream>
#include <fstream>
using namespace std;

int main (){
	int acertos=0, posI, posJ;
	ifstream entrada("entrada.txt");
	
	int matriz[8][8];
	
	if(entrada){
		for(int i=0; i < 8; i++){
			for(int j=0; j < 8; j++){
				entrada >> matriz[i][j];
				if(matriz[i][j] == 1){
					posI = i;
					posJ = j;
				}
			}
		}
	}else cout << "ERRO" << endl;
	entrada.close();

	if(matriz[posI-1][posJ] == 2 and (posI-1 >= 0 and posJ >= 0) and (posI-1 < 8 and posJ < 8) )
		acertos++;
	if(matriz[posI-1][posJ+1] == 2 and (posI-1 >= 0 and posJ+1 >= 0) and (posI-1 < 8 and posJ+1 < 8) )
		acertos++;
	if(matriz[posI][posJ+1] == 2 and (posI >= 0 and posJ+1 >= 0) and (posI < 8 and posJ+1 < 8) )
		acertos++;
	if(matriz[posI+1][posJ+1] == 2 and (posI+1 >= 0 and posJ+1 >= 0) and (posI+1 < 8 and posJ+1 < 8) )
		acertos++;
	if(matriz[posI+1][posJ] == 2 and (posI+1 >= 0 and posJ >= 0) and (posI+1 < 8 and posJ < 8) )
		acertos++; 
	if(matriz[posI+1][posJ-1] == 2 and (posI+1 >= 0 and posJ-1 >= 0) and (posI+1 < 8 and posJ-1 < 8) )
		acertos++; 
	if(matriz[posI][posJ-1] == 2 and (posI >= 0 and posJ-1 >= 0) and (posI < 8 and posJ-1 < 8) )
		acertos++; 
	if(matriz[posI-1][posJ-1] == 2 and (posI-1 >= 0 and posJ-1 >= 0) and (posI-1 < 8 and posJ-1 < 8) )
		acertos++;
	
	ofstream saida("saida.txt");
	
	if(saida){
		saida << acertos;
	}else cout << "ERRO" << endl;
	saida.close();
	
	return 0;
}
