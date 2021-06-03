#include <iostream>
using namespace std;

int inverte(int num, int& cont){
	int numA, aux;
	
	if (cont == num){
		cin >> numA;
		return numA;
	}else{
		cin >> numA;
		cont++;
		aux = inverte(num, cont);
		return aux;
	}
}

int main (){
	int num, cont=0;
	
	cin >> num;
	
	inverte (num, cont);
	
	return 0;
}
