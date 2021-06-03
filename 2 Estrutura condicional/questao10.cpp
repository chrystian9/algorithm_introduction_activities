#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cin >> num1 >> num2;
	
	if (num1 > num2){
		cout << num1 - num2;
	}else if (num2 > num1){
		cout << num2 - num1;
	}else if (num1 == num2){
		cout << "0";
	}
	return 0;
}
