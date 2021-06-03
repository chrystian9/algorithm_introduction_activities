#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int limCarga, numGal, numVacas, numCav; //limite de carga, numero de galinhas, vacas e cavalos, respectivamente.
	
	cin >> limCarga >> numCav >> numVacas >> numGal;
	
	numGal = numGal * 2;
	numVacas = numVacas * 150;
	numCav = numCav * 250;
	
	if (limCarga - numGal >= 0){
		limCarga = limCarga - numGal;
		numGal = 0;
	}else{
		if ((((limCarga - numGal) / float(2)) * (-1)) < 1){
			numGal = 1;
			limCarga = 0;
		}else{
			numGal = ceil(((limCarga - numGal) / float(2)) * (-1));
			limCarga = 0;
		}
	}
	if (limCarga - numVacas >= 0){
		limCarga = limCarga - numVacas;
		numVacas = 0;
	}else{
		if ((((limCarga - numVacas) / float(150)) * (-1)) < 1){
			numVacas = 1;
			limCarga = 0;
		}else{
			numVacas = ceil(((limCarga - numVacas) / float(150)) * (-1));
			limCarga = 0;
		}
	}
	if (limCarga - numCav >= 0){
		limCarga = limCarga - numCav;
		numCav = 0;
	}else{
		if ((((limCarga - numCav) / float(250)) * (-1)) < 1){
			numCav = 1;
			limCarga = 0;
		}else{
			numCav = ceil(((limCarga - numCav) / float(250)) * (-1));
			limCarga = 0;
		}
	}
	
	cout << numCav << endl << numVacas << endl << numGal << endl;
		
	return 0;
}
