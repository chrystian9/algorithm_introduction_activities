#include <iostream>
using namespace std;

int divisores (int num, int& div2Menor, int& div2Maior){
	int cont=1, cont2=0;
	
	
	while (cont <= num){
		if (num % cont == 0){
			cont2++;
			cout << cont << endl;
			if (cont2 == 2){
				if (cont == num){
					div2Menor = 1;
					div2Maior = num;
				}else{
					div2Menor = cont;
				}
			}
			if ((div2Menor * cont) == num){
				div2Maior = cont;
			}
		}
		cont++;
	}
	return 1;
} 

int main (){
	int num, div2Menor=0, div2Maior=0;
	
	cin >> num;
	
	divisores (num, div2Menor, div2Maior);
		
	cout << div2Menor << " " << div2Maior << endl;
	
	return 0;
}
