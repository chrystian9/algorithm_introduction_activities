#include <iostream>
using namespace std;

int main (){
	int horas, minutos, a, b, c;
	
	cin >> horas;
	cin >> minutos;
	
	a = horas * 60;
	b = a + minutos;
	c = b * 60;
	
	cout << a << endl << b << endl << c;
	return 0;
}
