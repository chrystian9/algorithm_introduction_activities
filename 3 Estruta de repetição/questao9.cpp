#include <iostream>
using namespace std;

int main (){
	int num, n1=0, n2=1, aux, cont=0;
	
	cin >> num;
	
	while (cont < num){
		if (cont == 0){
			cout << n1 << " ";
		}else if (cont == 1){
			cout << n2 << " ";
		}else if (cont == 2){
			cout << n1 + n2 << " ";
			aux = n2;
			n1 = n1 + n2;
			n2 = aux;
		}else if (cont >= 3){
			cout << n1 + n2 << " ";
			aux = n1;
			n1 = n1 + n2;
			n2 = aux;
		}
		cont++;
	}
	return 0;
}
