#include <iostream>
using namespace std;

char* geraVetor(int mesE){
	
	const char* mes[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

	char * result = new char[(sizeof(mes[mesE-1]))];
	for(int i = 0; (result[i] = mes[mesE-1][i]) != '\0'; i++);
	
	return result;
}

int main (){
	int mes;
	
	cin >> mes;
	char * result = geraVetor(mes);
	
	for (int i =0; result[i] != '\0'; i++){
		cout << result[i];
	}
	cout << endl;
	
	return 0;
}
