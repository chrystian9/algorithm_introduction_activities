#include <iostream>
using namespace std;

int numeros(int num){
	
	if (num == 0){
		cout << 0 << " ";
		return 0;
	}else{
		cout << numeros (num - 1) + 1 << " ";
		return num;
	}
}

int main (){
	int num;
	
	cin >> num;
	
	numeros(num);
	
	return 0;
}
