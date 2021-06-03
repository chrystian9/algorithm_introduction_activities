#include <iostream>
using namespace std;

int soma(int num, int num2){
	int soma=0, cont=0;
	
	while (cont < num2){
		soma = soma + num;
		cont++;
	}
	return soma;
}

int main (){
	int num, num2;
	
	cin >> num >> num2;
	
	cout << soma(num, num2) << endl;
	
	return 0;
}
