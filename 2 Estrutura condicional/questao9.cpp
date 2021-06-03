#include <iostream>
using namespace std;

int main (){
	float sal, aumento;
	
	cin >> sal;
	
	if (sal <= 300){
		aumento = 0.15 * sal;
		sal = sal + aumento;
	}else if (sal > 300 and sal <= 600){
		aumento = 0.10 * sal;
		sal = sal + aumento;
	}else if (sal > 600 and sal <= 900){
		aumento = 0.05 * sal;
		sal = sal + aumento;
	}else if (sal > 900){
		aumento = 0;
	}
	cout << aumento << endl << sal << endl;
	return 0;
}
