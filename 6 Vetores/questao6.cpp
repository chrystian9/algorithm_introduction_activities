#include <iostream>
using namespace std;

int main (){
	float tempMeses[12];
	int mesMaior=0, mesMenor=0;
	string mes[12]={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	
	cin >> tempMeses[0];
	
	float tempMaior = tempMeses[0], tempMenor = tempMeses[0];
	
	for (int i=1; i <= 11; i++){
		cin >> tempMeses[i];
		if (tempMeses[i] > tempMaior){
			tempMaior = tempMeses[i];
			mesMaior = i;
		}else if (tempMeses[i] < tempMenor){
			tempMenor = tempMeses[i];
			mesMenor = i;
		}
	}
	
	cout << mes[mesMaior] << endl << mes[mesMenor] << endl;
	
	return 0;
}
	
	
	
