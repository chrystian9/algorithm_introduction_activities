#include <iostream>
using namespace std;

int fib1(int& n1, int& n2){
	n1 = n1 + n2;
	cout << n1 << endl;
	return n1;
}

int fib2(int& n2, int& n1){
	n2 = n1;
	cout << n2 << endl;
	return n2;
}

int main (){
	int num, n1=0, n2=1, cont=0;
	
	cin >> num;
	
	while (cont < num){
		if (cont == 0){
			cout << n1 << " ";
		}else if (cont == 1){
			cout << n2 << " ";
		}else if (cont == 2){
			cout << n1 + n2 << " " << endl;
		}else if (cont > 2){
			cout << fib1(n1, n2) + fib2(n2, n1) << "-" << endl;
		}			
		cont++;
	}
	return 0;
}
