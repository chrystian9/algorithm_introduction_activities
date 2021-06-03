#include <iostream>
using namespace std;

int main(){
	int valor = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
	
	cin >> valor;
	n100 = valor / 100;
	valor = valor % 100;
	n50 = valor / 50;
	valor = valor % 50;
	n20 = valor / 20;
	valor = valor % 20;
	n10 = valor / 10;
	valor = valor % 10;
	n5 = valor / 5;
	valor = valor % 5;
	n2 = valor / 2;
	valor = valor % 2;
	n1 = valor / 1;
	valor = valor % 1;
	cout << n100 << endl << n50 << endl << n20 << endl << n10 << endl << n5 << endl << n2 << endl << n1;
	return 0;
}
