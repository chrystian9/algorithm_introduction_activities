#include <iostream>
using namespace std;

int main (){
	int num, num1=0, num2=0, num3=0, num4=0, num5=0;
	
	cin >> num;
	
	if (num <= 99999){
			num1 = num / 10000;
			num2 = (num % 10000) / 1000;
			num3 = (num % 1000) / 100;
			num4 = (num % 100) / 10;
			num5 = (num % 10) / 1;
			
			cout << num1 << "..." << num2 << "..." << num3 << "..." << num4 << "..." << num5 << endl;
		
	}else if (num > 99999){
		cout << "invalido" << endl;
	}
	return 0;
}
