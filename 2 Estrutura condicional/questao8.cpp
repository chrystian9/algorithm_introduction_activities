#include <iostream>
using namespace std;

int main (){
	int lado1, lado2, lado3;
	
	cin >> lado1 >> lado2 >> lado3;
	
	if (lado1 < lado2 + lado3 and lado2 < lado1 + lado3 and lado3 < lado1 + lado2){
		if (lado1 != lado2 and lado1 != lado3){
			cout << "escaleno";
		}else if (lado1 == lado2 and lado1 == lado3){
			cout << "equilatero";
		}else if ((lado1 == lado2 and lado1 != lado3) or (lado2 == lado3 and lado2 != 1)){
			cout << "isosceles";
		}
	}else{
		cout << "-1" << endl;
	}
	return 0;
}
