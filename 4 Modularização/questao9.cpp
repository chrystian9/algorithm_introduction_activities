#include <iostream>
using namespace std;

int teste(int num1, int num2, int num3, int num4, int num5){
	if (num1 >= num2 and num1 >= num3 and num1 >= num4 and num1 >= num5){
		return num1;
	}else if (num2 >= num1 and num2 >= num3 and num2 >= num4 and num2 >= num5){
		return num2;
	}else if (num3 >= num2 and num3 >= num2 and num3 >= num4 and num3 >= num5){
		return num3;
	}else if (num4 >= num1 and num4 >= num2 and num4 >= num3 and num4 >= num5){
		return num4;
	}else if (num5 >= num1 and num5 >= num2 and num5 >= num3 and num5 >= num4){
		return num5;
	}
	return 1;
}


int main (){
	int num1, num2, num3, num4, num5;
	
	cin >> num1 >> num2 >> num3 >> num4 >> num5;		
	cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;
	
	cout <<	teste(num1, num2, num3, num4, num5) << endl;

	return 0;
}
