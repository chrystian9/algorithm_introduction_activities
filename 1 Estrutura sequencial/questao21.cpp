#include <iostream>
#include <cmath>
using namespace std;

int main (){
	float altDegrau, altura;
	
	cin >> altDegrau;
	cin >> altura;
	cout << ceil((altura * 100) / altDegrau);
	return 0;
}
