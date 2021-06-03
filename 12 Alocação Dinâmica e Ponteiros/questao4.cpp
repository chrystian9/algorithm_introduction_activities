#include <iostream>
using namespace std;

int* somaColunas(int** matriz){
	int *aux = new int[5];
	
	for(int j=0; j<5; j++){
		for(int i=0; i<5; i++){
			if(i == 0) aux[j] = 0;
			aux[j] = aux[j] + matriz[i][j];
		}
	}
	return aux;
}

int main (){
	int **A = new int*[5];
	
	for(int c=0; c<5; c++)
		A[c] = new int[5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++)
			cin >> A[i][j];
	}
	
	int *B = somaColunas(A);
	
	for(int c=0; c<5; c++)
		cout << B[c] << " ";
	
	cout << endl;
	
	return 0;
}
		
