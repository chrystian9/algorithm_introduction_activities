#include <iostream>
using namespace std;

int main(){
	float sal, salDolar, salEuro, salLibra;
	
	cin >> sal;
	salDolar = sal / 2.13;
	salEuro = sal / 2.84;
	salLibra = sal / 3.34;
	cout << salDolar << endl;
	cout << salEuro << endl;
	cout << salLibra;
	return 0;
}
