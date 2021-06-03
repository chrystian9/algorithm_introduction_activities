#include <iostream>
using namespace std;

int macho(int termo);

int femea(int termo, float sds){
	int fTermo;
	if (termo == 0){
		fTermo = 1;
	}else{
		fTermo = termo - (macho(femea(termo - 1)));
	}
	return fTermo;
}

int macho(int termo){
	int fTermo;
	if (termo == 0){
		fTermo = 0;
	}else{
		fTermo = termo - (femea(macho(termo - 1)));
	}
	return fTermo;
}

int main (){
	int termo_M1, termo_M2, termo_M3, termo_F1, termo_F2, termo_F3;
	
		cin >> termo_F1 >> termo_F2 >> termo_F3 >> termo_M1 >> termo_M2 >> termo_M3;
		
		cout << femea(termo_F1) << " ";
		cout << femea(termo_F2) << " ";
		cout << femea(termo_F3) << " ";
		cout << macho(termo_M1) << " ";
		cout << macho(termo_M2) << " ";
		cout << macho(termo_M3) << " ";
		
	return 0;
}
