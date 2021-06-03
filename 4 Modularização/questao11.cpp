#include <iostream>
using namespace std;

int soma(int num1, int num2){
	int soma;
	soma = num1 + num2;
	return soma;
}

int main (){
	int num1, num2;
	
	cin >> num1 >> num2;
	
	cout << soma(num1, num2) << endl;
	
	return 0;
}
