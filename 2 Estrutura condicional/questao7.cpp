#include <iostream>
using namespace std;

int main (){
	float num1, num2, num3, num4, maior1, maior2;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	
	if (num1 > num2 and num1 > num3 and num1 > num4){
		maior1 = num1;
		if (num2 > num3 and num2 > num4){
		maior2 = num2;
		}
		if (num3 > num2 and num3 > num4){
		maior2 = num3;
		}
		if (num4 > num3 and num4 > num2){
			maior2 = num4;
		}
	}
	if (num2 > num1 and num2 > num3 and num2 > num4){
		maior1 = num2;
		if (num1 > num3 and num1 > num4){
		maior2 = num1;
		}
		if (num3 > num1 and num3 > num4){
			maior2 = num3;
		}
		if (num4 > num3 and num4 > num1){
			maior2 = num4;
		}
	}
	if (num3 > num1 and num3 > num2 and num3 > num4){
		maior1 = num3;
		if (num2 > num1 and num2 > num4){
			maior2 = num2;
		}
		if (num1 > num2 and num1 > num4){
			maior2 = num1;
		}
		if (num4 > num1 and num4 > num2){
			maior2 = num4;
		}
	}
	if (num4 > num1 and num4 > num2 and num4 > num3){
		maior1 = num4;
		if (num2 > num3 and num2 > num1){
			maior2 = num2;
		}
		if (num3 > num2 and num3 > num1){
			maior2 = num3;
		}
		if (num1 > num3 and num1 > num2){
			maior2 = num1;
		}
	}
	cout << maior1 << endl << maior2 << endl;
}
