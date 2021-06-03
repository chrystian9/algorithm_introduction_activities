#include <iostream>
using namespace std;

int main (){
	int cont=1, cont2=0, num;
	
	cin >> num;
	
	while (cont <= num){
		if (num % cont == 0){
			cout << cont << endl;
			cont2++;
			
		}
		cont++;
	}
	return 0;
} 
