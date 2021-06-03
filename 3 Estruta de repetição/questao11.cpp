#include <iostream>
using namespace std;

int main (){
	int maior=0, menor=0, num, soma=0, cont=0;
	
	 while(cont < 7){
		cin >> num;
		soma = soma + num;
		
		if (cont == 0){
			maior = num;
		}else if (num >= maior){
			menor = maior;
			maior = num;
		}else if(num > menor and num < maior){menor = num;}
		cont++;
	}
	cout << maior << endl << menor << endl << ((soma - maior - menor)/5) << endl;
	return 0;
}
