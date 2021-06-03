#include <iostream>
using namespace std;

int main (){
	int num1, num2, aux;
	
	cin >> num1 >> num2;
	
	while (num2 > 0){
		aux = num2;
		num2 = num1 % num2;
		num1 = aux;
	}
	cout << num1 << endl;
	return 0;
}
