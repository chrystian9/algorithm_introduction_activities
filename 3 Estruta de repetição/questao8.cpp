#include <iostream>
using namespace std;

int main (){
	int num, cont=1, resultado=1;
	
	cin >> num;
	
	while (cont <= num){
		resultado = resultado * cont;
		cont++;
	}
	cout << resultado << endl;
}
